/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAddCourse;
    QAction *actionEditCourse;
    QAction *actionDeleteCourse;
    QAction *actionAddTask;
    QAction *actionCompleteTask;
    QAction *actionDeleteTask;
    QAction *actionShowHide;
    QAction *actionExit;
    QAction *actionSetReminder;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *courseTable;
    QTableWidget *taskTable;
    QHBoxLayout *horizontalLayout;
    QLabel *currentCourseLabel;
    QLabel *nextCourseLabel;
    QMenuBar *menuBar;
    QMenu *menuCourse;
    QMenu *menuTask;
    QMenu *menuWindow;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAddCourse = new QAction(MainWindow);
        actionAddCourse->setObjectName("actionAddCourse");
        actionEditCourse = new QAction(MainWindow);
        actionEditCourse->setObjectName("actionEditCourse");
        actionDeleteCourse = new QAction(MainWindow);
        actionDeleteCourse->setObjectName("actionDeleteCourse");
        actionAddTask = new QAction(MainWindow);
        actionAddTask->setObjectName("actionAddTask");
        actionCompleteTask = new QAction(MainWindow);
        actionCompleteTask->setObjectName("actionCompleteTask");
        actionDeleteTask = new QAction(MainWindow);
        actionDeleteTask->setObjectName("actionDeleteTask");
        actionShowHide = new QAction(MainWindow);
        actionShowHide->setObjectName("actionShowHide");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionSetReminder = new QAction(MainWindow);
        actionSetReminder->setObjectName("actionSetReminder");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        courseTable = new QTableWidget(centralWidget);
        courseTable->setObjectName("courseTable");

        verticalLayout->addWidget(courseTable);

        taskTable = new QTableWidget(centralWidget);
        taskTable->setObjectName("taskTable");

        verticalLayout->addWidget(taskTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        currentCourseLabel = new QLabel(centralWidget);
        currentCourseLabel->setObjectName("currentCourseLabel");

        horizontalLayout->addWidget(currentCourseLabel);

        nextCourseLabel = new QLabel(centralWidget);
        nextCourseLabel->setObjectName("nextCourseLabel");

        horizontalLayout->addWidget(nextCourseLabel);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuCourse = new QMenu(menuBar);
        menuCourse->setObjectName("menuCourse");
        menuTask = new QMenu(menuBar);
        menuTask->setObjectName("menuTask");
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName("menuWindow");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuCourse->menuAction());
        menuBar->addAction(menuTask->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuCourse->addAction(actionAddCourse);
        menuCourse->addAction(actionEditCourse);
        menuCourse->addAction(actionDeleteCourse);
        menuTask->addAction(actionAddTask);
        menuTask->addAction(actionCompleteTask);
        menuTask->addAction(actionDeleteTask);
        menuWindow->addAction(actionShowHide);
        menuWindow->addAction(actionExit);
        menuWindow->addAction(actionSetReminder);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\344\270\216\344\273\273\345\212\241\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionAddCourse->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        actionEditCourse->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\257\276\347\250\213", nullptr));
        actionDeleteCourse->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\257\276\347\250\213", nullptr));
        actionAddTask->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        actionCompleteTask->setText(QCoreApplication::translate("MainWindow", "\346\240\207\350\256\260\344\273\273\345\212\241\345\256\214\346\210\220", nullptr));
        actionDeleteTask->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\344\273\273\345\212\241", nullptr));
        actionShowHide->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionSetReminder->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\217\220\351\206\222\346\227\266\351\227\264", nullptr));
        currentCourseLabel->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\240\350\257\276\347\250\213", nullptr));
        nextCourseLabel->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251\346\262\241\346\234\211\346\233\264\345\244\232\350\257\276\347\250\213\344\272\206", nullptr));
        menuCourse->setTitle(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213", nullptr));
        menuTask->setTitle(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
