import sys
import datetime
from PyQt5.QtWidgets import (
    QApplication, QMainWindow, QTableWidgetItem,
    QSystemTrayIcon, QMenu, QAction, QMessageBox,
    QInputDialog, QCheckBox, QDateEdit
)
from PyQt5.QtGui import QIcon, QColor
from PyQt5.QtCore import QTimer, QDate

from ui.main_window_ui import Ui_MainWindow
from ui.course_dialog_ui import CourseDialog

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.setWindowTitle("智能课程表助手")
        self.setWindowIcon(QIcon("resources/icon.png"))

        self.courses = []   # 保存课程信息
        self.homeworks = [] # 保存作业信息

        self.setup_course_table()
        self.setup_homework_table()
        self.setup_tray()
        self.setup_timer()
        self.bind_buttons()

    # ========== 课程表相关 ==========
    def setup_course_table(self):
        self.table.setRowCount(12)
        self.table.setColumnCount(7)
        self.table.setHorizontalHeaderLabels(["周一", "周二", "周三", "周四", "周五", "周六", "周日"])
        self.table.setVerticalHeaderLabels([f"第{i+1}节" for i in range(12)])
        self.table.verticalHeader().setDefaultSectionSize(50)

    def add_course(self):
        dialog = CourseDialog(self)
        if dialog.exec_():
            course = dialog.get_course()
            self.courses.append(course)
            self.render_course(course)

    def del_course(self):
        selected = self.table.selectedItems()
        if selected:
            item = selected[0]
            self.table.setItem(item.row(), item.column(), None)

    def render_course(self, course):
        row = course['section'] - 1
        col = course['weekday'] - 1
        text = f"{course['name']}\n{course['room']}"
        item = QTableWidgetItem(text)
        item.setBackground(QColor(course.get('color', '#aee1f9')))
        self.table.setItem(row, col, item)

    # ========== 作业管理相关 ==========
    def setup_homework_table(self):
        self.homeworkTable.setColumnCount(6)
        self.homeworkTable.setHorizontalHeaderLabels(["作业名称", "课程", "截止日期", "状态", "剩余时间", "操作"])
        self.homeworkTable.setEditTriggers(self.homeworkTable.NoEditTriggers)

    def add_homework(self):
        name, ok = QInputDialog.getText(self, "添加作业", "作业名称：")
        if not ok or not name: return

        course, ok = QInputDialog.getText(self, "关联课程", "课程名称：")
        if not ok or not course: return

        date_dialog = QDateEdit(self)
        date_dialog.setCalendarPopup(True)
        date_dialog.setDate(QDate.currentDate())
        if date_dialog.exec(): return
        due_date = date_dialog.date().toPyDate()

        hw = {
            'name': name,
            'course': course,
            'due': due_date,
            'done': False
        }
        self.homeworks.append(hw)
        self.render_homeworks()

    def render_homeworks(self):
        self.homeworkTable.setRowCount(0)
        today = datetime.date.today()

        sorted_hw = sorted(self.homeworks, key=lambda x: x['due'])
        for idx, hw in enumerate(sorted_hw):
            row = self.homeworkTable.rowCount()
            self.homeworkTable.insertRow(row)

            self.homeworkTable.setItem(row, 0, QTableWidgetItem(hw['name']))
            self.homeworkTable.setItem(row, 1, QTableWidgetItem(hw['course']))
            self.homeworkTable.setItem(row, 2, QTableWidgetItem(hw['due'].strftime("%Y-%m-%d")))

            status = "完成" if hw['done'] else "未完成"
            self.homeworkTable.setItem(row, 3, QTableWidgetItem(status))

            delta = (hw['due'] - today).days
            if delta < 0:
                remain = f"已过期{abs(delta)}天"
            elif delta == 0:
                remain = "今天"
            else:
                remain = f"还剩{delta}天"
            remain_item = QTableWidgetItem(remain)

            if 0 <= delta <= 3 and not hw['done']:
                remain_item.setBackground(QColor("#ffcccc"))  # 临近截止标红

            self.homeworkTable.setItem(row, 4, remain_item)

            checkbox = QCheckBox()
            checkbox.setChecked(hw['done'])
            checkbox.stateChanged.connect(lambda state, i=idx: self.toggle_homework_done(i, state))
            self.homeworkTable.setCellWidget(row, 5, checkbox)

    def toggle_homework_done(self, index, state):
        self.homeworks[index]['done'] = bool(state)
        self.render_homeworks()

    def delete_selected_homework(self):
        rows = {item.row() for item in self.homeworkTable.selectedItems()}
        for row in sorted(rows, reverse=True):
            del self.homeworks[row]
        self.render_homeworks()

    # ========== 托盘与提醒相关 ==========
    def setup_tray(self):
        self.tray_icon = QSystemTrayIcon(QIcon("resources/icon.png"), self)
        menu = QMenu()
        quit_action = QAction("退出", self)
        quit_action.triggered.connect(QApplication.quit)
        menu.addAction(quit_action)
        self.tray_icon.setContextMenu(menu)
        self.tray_icon.show()

    def setup_timer(self):
        self.timer = QTimer(self)
        self.timer.timeout.connect(self.check_current_course)
        self.timer.start(60 * 1000)  # 每分钟检查一次

    def check_current_course(self):
        now = datetime.datetime.now()
        weekday = now.weekday()  # 0 = Monday
        hour = now.hour
        section = self.time_to_section(hour)

        if section is not None:
            course = next((c for c in self.courses if c['weekday'] == weekday + 1 and c['section'] == section), None)
            if course:
                self.tray_icon.showMessage("上课提醒", f"{course['name']} 正在上课\n教室：{course['room']}", QSystemTrayIcon.Information, 5000)

    def time_to_section(self, hour):
        if 8 <= hour < 10: return 1
        if 10 <= hour < 12: return 2
        if 13 <= hour < 15: return 3
        if 15 <= hour < 17: return 4
        if 18 <= hour < 20: return 5
        if 20 <= hour < 22: return 6
        return None

    # ========== 绑定按钮 ==========
    def bind_buttons(self):
        self.btn_add_course.clicked.connect(self.add_course)
        self.btn_del_course.clicked.connect(self.del_course)
        self.btn_add_hw.clicked.connect(self.add_homework)
        self.btn_del_hw.clicked.connect(self.delete_selected_homework)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
