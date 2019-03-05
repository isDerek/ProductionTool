/********************************************************************************
** Form generated from reading UI file 'setting_maximuminputpower.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_MAXIMUMINPUTPOWER_H
#define UI_SETTING_MAXIMUMINPUTPOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Setting_MaximumInputPower
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *group_Conditions;
    QLabel *label;
    QLineEdit *le_PacketsNumber;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLineEdit *le_Low;
    QLineEdit *le_Medium;
    QLineEdit *le_High;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *le_PowerLevel;
    QLabel *label_8;
    QGroupBox *group_Limits;
    QLabel *label_5;
    QLineEdit *le_LessTotalErrorRate;
    QLabel *label_6;

    void setupUi(QDialog *Setting_MaximumInputPower)
    {
        if (Setting_MaximumInputPower->objectName().isEmpty())
            Setting_MaximumInputPower->setObjectName(QString::fromUtf8("Setting_MaximumInputPower"));
        Setting_MaximumInputPower->resize(381, 281);
        buttonBox = new QDialogButtonBox(Setting_MaximumInputPower);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        group_Conditions = new QGroupBox(Setting_MaximumInputPower);
        group_Conditions->setObjectName(QString::fromUtf8("group_Conditions"));
        group_Conditions->setGeometry(QRect(10, 0, 361, 171));
        label = new QLabel(group_Conditions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 21));
        le_PacketsNumber = new QLineEdit(group_Conditions);
        le_PacketsNumber->setObjectName(QString::fromUtf8("le_PacketsNumber"));
        le_PacketsNumber->setGeometry(QRect(170, 20, 51, 21));
        checkBox = new QCheckBox(group_Conditions);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 50, 91, 19));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(group_Conditions);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(60, 80, 91, 19));
        checkBox_2->setChecked(true);
        checkBox_3 = new QCheckBox(group_Conditions);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(60, 110, 91, 19));
        checkBox_3->setAcceptDrops(false);
        checkBox_3->setChecked(true);
        checkBox_3->setTristate(false);
        le_Low = new QLineEdit(group_Conditions);
        le_Low->setObjectName(QString::fromUtf8("le_Low"));
        le_Low->setGeometry(QRect(230, 50, 51, 21));
        le_Medium = new QLineEdit(group_Conditions);
        le_Medium->setObjectName(QString::fromUtf8("le_Medium"));
        le_Medium->setGeometry(QRect(230, 80, 51, 21));
        le_High = new QLineEdit(group_Conditions);
        le_High->setObjectName(QString::fromUtf8("le_High"));
        le_High->setGeometry(QRect(230, 110, 51, 21));
        label_2 = new QLabel(group_Conditions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 50, 41, 21));
        label_3 = new QLabel(group_Conditions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 80, 41, 21));
        label_4 = new QLabel(group_Conditions);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 110, 41, 21));
        label_7 = new QLabel(group_Conditions);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 140, 101, 21));
        le_PowerLevel = new QLineEdit(group_Conditions);
        le_PowerLevel->setObjectName(QString::fromUtf8("le_PowerLevel"));
        le_PowerLevel->setGeometry(QRect(230, 140, 51, 21));
        label_8 = new QLabel(group_Conditions);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 140, 41, 21));
        group_Limits = new QGroupBox(Setting_MaximumInputPower);
        group_Limits->setObjectName(QString::fromUtf8("group_Limits"));
        group_Limits->setGeometry(QRect(10, 170, 361, 61));
        label_5 = new QLabel(group_Limits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 20, 161, 21));
        le_LessTotalErrorRate = new QLineEdit(group_Limits);
        le_LessTotalErrorRate->setObjectName(QString::fromUtf8("le_LessTotalErrorRate"));
        le_LessTotalErrorRate->setGeometry(QRect(230, 20, 51, 21));
        label_6 = new QLabel(group_Limits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 20, 41, 21));

        retranslateUi(Setting_MaximumInputPower);
        QObject::connect(buttonBox, SIGNAL(accepted()), Setting_MaximumInputPower, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Setting_MaximumInputPower, SLOT(reject()));

        QMetaObject::connectSlotsByName(Setting_MaximumInputPower);
    } // setupUi

    void retranslateUi(QDialog *Setting_MaximumInputPower)
    {
        Setting_MaximumInputPower->setWindowTitle(QApplication::translate("Setting_MaximumInputPower", "Dialog", nullptr));
        group_Conditions->setTitle(QApplication::translate("Setting_MaximumInputPower", "Conditions", nullptr));
        label->setText(QApplication::translate("Setting_MaximumInputPower", "Number of Packets", nullptr));
        le_PacketsNumber->setText(QApplication::translate("Setting_MaximumInputPower", "1500", nullptr));
        checkBox->setText(QApplication::translate("Setting_MaximumInputPower", "Low", nullptr));
        checkBox_2->setText(QApplication::translate("Setting_MaximumInputPower", "Medium", nullptr));
        checkBox_3->setText(QApplication::translate("Setting_MaximumInputPower", "High", nullptr));
        le_Low->setText(QApplication::translate("Setting_MaximumInputPower", "2402", nullptr));
        le_Medium->setText(QApplication::translate("Setting_MaximumInputPower", "2440", nullptr));
        le_High->setText(QApplication::translate("Setting_MaximumInputPower", "2480", nullptr));
        label_2->setText(QApplication::translate("Setting_MaximumInputPower", "MHz", nullptr));
        label_3->setText(QApplication::translate("Setting_MaximumInputPower", "MHz", nullptr));
        label_4->setText(QApplication::translate("Setting_MaximumInputPower", "MHz", nullptr));
        label_7->setText(QApplication::translate("Setting_MaximumInputPower", "Power Level", nullptr));
        le_PowerLevel->setText(QApplication::translate("Setting_MaximumInputPower", "-10", nullptr));
        label_8->setText(QApplication::translate("Setting_MaximumInputPower", "dBm", nullptr));
        group_Limits->setTitle(QApplication::translate("Setting_MaximumInputPower", "Limits", nullptr));
        label_5->setText(QApplication::translate("Setting_MaximumInputPower", "Total Error Rate \342\211\244", nullptr));
        le_LessTotalErrorRate->setText(QApplication::translate("Setting_MaximumInputPower", "30.8", nullptr));
        label_6->setText(QApplication::translate("Setting_MaximumInputPower", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting_MaximumInputPower: public Ui_Setting_MaximumInputPower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_MAXIMUMINPUTPOWER_H
