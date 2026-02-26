/********************************************************************************
** Form generated from reading UI file 'ReminderDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDERDIALOG_H
#define UI_REMINDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReminderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinBoxMinutes;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReminderDialog)
    {
        if (ReminderDialog->objectName().isEmpty())
            ReminderDialog->setObjectName("ReminderDialog");
        verticalLayout = new QVBoxLayout(ReminderDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ReminderDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        spinBoxMinutes = new QSpinBox(ReminderDialog);
        spinBoxMinutes->setObjectName("spinBoxMinutes");
        spinBoxMinutes->setMinimum(1);
        spinBoxMinutes->setMaximum(720);

        verticalLayout->addWidget(spinBoxMinutes);

        buttonBox = new QDialogButtonBox(ReminderDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ReminderDialog);

        QMetaObject::connectSlotsByName(ReminderDialog);
    } // setupUi

    void retranslateUi(QDialog *ReminderDialog)
    {
        ReminderDialog->setWindowTitle(QCoreApplication::translate("ReminderDialog", "\350\256\276\347\275\256\346\217\220\351\206\222\346\227\266\351\227\264", nullptr));
        label->setText(QCoreApplication::translate("ReminderDialog", "\350\257\267\351\200\211\346\213\251\346\217\220\345\211\215\346\217\220\351\206\222\347\232\204\345\210\206\351\222\237\346\225\260 (1\342\200\223720)\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReminderDialog: public Ui_ReminderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDERDIALOG_H
