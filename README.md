# Smart Course Assistant —— 智能课程助手

> 2025 春季学期《C/C++ 程序设计实践》课程大作业 · 团队 **深藏blue**（龚贺宁、鲍彦泽、蓝毅辉）

## 项目简介

**Smart Course Assistant** 是一款基于 **C++ / Qt** 开发的桌面端智能课程表助手，旨在帮助大学生高效管理课程、作业与考试安排。应用提供直观的周课程表视图、任务管理与到期提醒功能，让学生轻松掌握每日学习节奏。

## 功能特性

### 📅 课程管理
- 添加、编辑、删除课程，信息包括课程名称、上课时间（节次）、教室、教师及备注
- 以**周视图表格**展示每周课程安排，最多支持每天 12 个课程节次
- 支持为课程设置**自定义颜色**标识，方便区分不同课程
- 自动检测课程时间**冲突**，避免排课重叠
- 快速查看**当前课程**与**下一节课**信息

### ✅ 任务管理
- 创建、编辑、删除作业与考试任务，并可关联到具体课程
- 设置截止日期与时间，自动计算**剩余天数**
- 标记任务完成状态，区分普通任务与考试类型
- 根据紧急程度以**不同颜色**高亮显示任务优先级

### 🔔 提醒通知
- 可配置**课前/截止前提醒**时间（分钟级）
- 集成**系统托盘图标**，支持最小化到托盘后台运行
- 提供静音模式，一键关闭通知打扰

### 🎨 界面与偏好
- 内置**亮色/暗色主题**切换
- 支持**中文界面**（Qt Linguist 国际化）
- 窗口位置和大小自动保存与恢复
- 丰富的图标资源，界面简洁美观

### 💾 数据持久化
- 课程与任务数据以二进制文件自动保存/加载（`schedule.dat`、`tasks.dat`）
- 用户偏好通过 `QSettings` 持久化存储

## 技术栈

| 类别 | 技术 |
|------|------|
| 编程语言 | C++17 |
| GUI 框架 | Qt 5.15+ / Qt 6.x |
| 构建系统 | CMake 3.16+ / qmake |
| 国际化 | Qt Linguist |
| 平台支持 | Windows · macOS · Linux |

## 项目结构

```
Smart Course Assistant/
├── main.cpp                 # 程序入口
├── MainWindow.cpp/h/ui      # 主窗口（周课表 + 任务列表）
├── Course.cpp/h             # 课程数据模型
├── Task.cpp/h               # 任务数据模型
├── ScheduleManager.cpp/h    # 课程管理器（增删改查、冲突检测）
├── TaskManager.cpp/h        # 任务管理器
├── Notification.cpp/h       # 提醒通知系统
├── Settings.cpp/h           # 偏好设置管理
├── CourseDialog.cpp/h/ui    # 课程编辑对话框
├── TaskDialog.cpp/h/ui      # 任务编辑对话框
├── ReminderDialog.cpp/h/ui  # 提醒设置对话框
├── resources/
│   ├── icons/               # 图标资源（19 个 PNG）
│   ├── styles/              # 主题样式表（light / dark / main）
│   └── resources.qrc        # Qt 资源清单
├── CMakeLists.txt           # CMake 构建配置
└── SmartScheduleAssistant.pro  # qmake 项目文件
```

## 构建与运行

### 前置要求
- Qt 5.15+ 或 Qt 6.x（已测试 Qt 6.9.0）
- CMake 3.16+（或 qmake）
- 支持 C++17 的编译器（如 MinGW 64-bit、GCC、Clang）

### 方法一：CMake（推荐）

```bash
cd "Smart Course Assistant"
mkdir build && cd build
cmake ..
cmake --build .
```

### 方法二：qmake

```bash
cd "Smart Course Assistant"
qmake SmartScheduleAssistant.pro
make          # Linux/macOS
mingw32-make  # Windows MinGW
```

### 运行

```bash
./SmartScheduleAssistant       # Linux/macOS
SmartScheduleAssistant.exe     # Windows
```

## 许可证

本项目基于 [MIT License](LICENSE) 开源。

## 支持与反馈

如果你在使用过程中遇到问题或有功能建议，欢迎通过 [Issue](../../issues) 提交反馈。
