/********************************************************************************
** Form generated from reading UI file 'CourseDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEDIALOG_H
#define UI_COURSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CourseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *editName;
    QLabel *labelDay;
    QComboBox *comboDay;
    QLabel *labelStart;
    QComboBox *comboStart;
    QLabel *labelEnd;
    QComboBox *comboEnd;
    QLabel *labelClassroom;
    QLineEdit *editClassroom;
    QLabel *labelTeacher;
    QLineEdit *editTeacher;
    QLabel *labelNote;
    QTextEdit *editNote;
    QLabel *labelColor;
    QPushButton *buttonColor;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CourseDialog)
    {
        if (CourseDialog->objectName().isEmpty())
            CourseDialog->setObjectName("CourseDialog");
        CourseDialog->resize(400, 350);
        verticalLayout = new QVBoxLayout(CourseDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelName = new QLabel(CourseDialog);
        labelName->setObjectName("labelName");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelName);

        editName = new QLineEdit(CourseDialog);
        editName->setObjectName("editName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, editName);

        labelDay = new QLabel(CourseDialog);
        labelDay->setObjectName("labelDay");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelDay);

        comboDay = new QComboBox(CourseDialog);
        comboDay->setObjectName("comboDay");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, comboDay);

        labelStart = new QLabel(CourseDialog);
        labelStart->setObjectName("labelStart");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelStart);

        comboStart = new QComboBox(CourseDialog);
        comboStart->setObjectName("comboStart");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, comboStart);

        labelEnd = new QLabel(CourseDialog);
        labelEnd->setObjectName("labelEnd");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, labelEnd);

        comboEnd = new QComboBox(CourseDialog);
        comboEnd->setObjectName("comboEnd");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, comboEnd);

        labelClassroom = new QLabel(CourseDialog);
        labelClassroom->setObjectName("labelClassroom");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, labelClassroom);

        editClassroom = new QLineEdit(CourseDialog);
        editClassroom->setObjectName("editClassroom");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, editClassroom);

        labelTeacher = new QLabel(CourseDialog);
        labelTeacher->setObjectName("labelTeacher");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, labelTeacher);

        editTeacher = new QLineEdit(CourseDialog);
        editTeacher->setObjectName("editTeacher");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, editTeacher);

        labelNote = new QLabel(CourseDialog);
        labelNote->setObjectName("labelNote");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, labelNote);

        editNote = new QTextEdit(CourseDialog);
        editNote->setObjectName("editNote");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, editNote);

        labelColor = new QLabel(CourseDialog);
        labelColor->setObjectName("labelColor");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, labelColor);

        buttonColor = new QPushButton(CourseDialog);
        buttonColor->setObjectName("buttonColor");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, buttonColor);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(CourseDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CourseDialog);

        QMetaObject::connectSlotsByName(CourseDialog);
    } // setupUi

    void retranslateUi(QDialog *CourseDialog)
    {
        CourseDialog->setWindowTitle(QCoreApplication::translate("CourseDialog", "\350\257\276\347\250\213\347\274\226\350\276\221", nullptr));
        labelName->setText(QCoreApplication::translate("CourseDialog", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        labelDay->setText(QCoreApplication::translate("CourseDialog", "\346\230\237\346\234\237", nullptr));
        labelStart->setText(QCoreApplication::translate("CourseDialog", "\345\274\200\345\247\213\350\212\202\346\254\241", nullptr));
        labelEnd->setText(QCoreApplication::translate("CourseDialog", "\347\273\223\346\235\237\350\212\202\346\254\241", nullptr));
        labelClassroom->setText(QCoreApplication::translate("CourseDialog", "\346\225\231\345\256\244", nullptr));
        labelTeacher->setText(QCoreApplication::translate("CourseDialog", "\346\225\231\345\270\210", nullptr));
        labelNote->setText(QCoreApplication::translate("CourseDialog", "\345\244\207\346\263\250", nullptr));
        labelColor->setText(QCoreApplication::translate("CourseDialog", "\351\242\234\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseDialog: public Ui_CourseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEDIALOG_H
