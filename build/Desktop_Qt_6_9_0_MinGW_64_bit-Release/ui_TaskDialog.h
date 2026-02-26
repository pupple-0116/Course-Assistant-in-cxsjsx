/********************************************************************************
** Form generated from reading UI file 'TaskDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDIALOG_H
#define UI_TASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TaskDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelTitle;
    QLineEdit *editTitle;
    QLabel *labelCourse;
    QComboBox *comboCourse;
    QLabel *labelDate;
    QDateEdit *dateEdit;
    QLabel *labelTime;
    QTimeEdit *timeEdit;
    QLabel *labelExam;
    QCheckBox *checkExam;
    QLabel *labelDescription;
    QTextEdit *editDescription;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TaskDialog)
    {
        if (TaskDialog->objectName().isEmpty())
            TaskDialog->setObjectName("TaskDialog");
        TaskDialog->resize(400, 350);
        verticalLayout = new QVBoxLayout(TaskDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelTitle = new QLabel(TaskDialog);
        labelTitle->setObjectName("labelTitle");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelTitle);

        editTitle = new QLineEdit(TaskDialog);
        editTitle->setObjectName("editTitle");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, editTitle);

        labelCourse = new QLabel(TaskDialog);
        labelCourse->setObjectName("labelCourse");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelCourse);

        comboCourse = new QComboBox(TaskDialog);
        comboCourse->setObjectName("comboCourse");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, comboCourse);

        labelDate = new QLabel(TaskDialog);
        labelDate->setObjectName("labelDate");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelDate);

        dateEdit = new QDateEdit(TaskDialog);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, dateEdit);

        labelTime = new QLabel(TaskDialog);
        labelTime->setObjectName("labelTime");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, labelTime);

        timeEdit = new QTimeEdit(TaskDialog);
        timeEdit->setObjectName("timeEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, timeEdit);

        labelExam = new QLabel(TaskDialog);
        labelExam->setObjectName("labelExam");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, labelExam);

        checkExam = new QCheckBox(TaskDialog);
        checkExam->setObjectName("checkExam");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, checkExam);

        labelDescription = new QLabel(TaskDialog);
        labelDescription->setObjectName("labelDescription");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, labelDescription);

        editDescription = new QTextEdit(TaskDialog);
        editDescription->setObjectName("editDescription");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, editDescription);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(TaskDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TaskDialog);

        QMetaObject::connectSlotsByName(TaskDialog);
    } // setupUi

    void retranslateUi(QDialog *TaskDialog)
    {
        TaskDialog->setWindowTitle(QCoreApplication::translate("TaskDialog", "\344\273\273\345\212\241\347\274\226\350\276\221", nullptr));
        labelTitle->setText(QCoreApplication::translate("TaskDialog", "\344\273\273\345\212\241\346\240\207\351\242\230", nullptr));
        labelCourse->setText(QCoreApplication::translate("TaskDialog", "\345\205\263\350\201\224\350\257\276\347\250\213", nullptr));
        labelDate->setText(QCoreApplication::translate("TaskDialog", "\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
        labelTime->setText(QCoreApplication::translate("TaskDialog", "\346\210\252\346\255\242\346\227\266\351\227\264", nullptr));
        labelExam->setText(QCoreApplication::translate("TaskDialog", "\346\230\257\345\220\246\344\270\272\350\200\203\350\257\225", nullptr));
        labelDescription->setText(QCoreApplication::translate("TaskDialog", "\344\273\273\345\212\241\346\217\217\350\277\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskDialog: public Ui_TaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDIALOG_H
