/********************************************************************************
** Form generated from reading UI file 'setting_modulationcharacteristic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_MODULATIONCHARACTERISTIC_H
#define UI_SETTING_MODULATIONCHARACTERISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Setting_ModulationCharacteristic
{
public:
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
    QRadioButton *rbtn_Once;
    QRadioButton *rbtn_Continuous;
    QDialogButtonBox *buttonBox_2;
    QGroupBox *group_Limits;
    QLabel *label_5;
    QLineEdit *le_OverF1avg;
    QLineEdit *le_LessF1avg;
    QLineEdit *le_LessF2max;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *le_OverF2avgOrF1avg;

    void setupUi(QDialog *Setting_ModulationCharacteristic)
    {
        if (Setting_ModulationCharacteristic->objectName().isEmpty())
            Setting_ModulationCharacteristic->setObjectName(QString::fromUtf8("Setting_ModulationCharacteristic"));
        Setting_ModulationCharacteristic->resize(381, 388);
        group_Conditions = new QGroupBox(Setting_ModulationCharacteristic);
        group_Conditions->setObjectName(QString::fromUtf8("group_Conditions"));
        group_Conditions->setGeometry(QRect(10, 0, 361, 181));
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
        label_7->setGeometry(QRect(20, 150, 72, 15));
        rbtn_Once = new QRadioButton(group_Conditions);
        rbtn_Once->setObjectName(QString::fromUtf8("rbtn_Once"));
        rbtn_Once->setGeometry(QRect(90, 150, 115, 19));
        rbtn_Continuous = new QRadioButton(group_Conditions);
        rbtn_Continuous->setObjectName(QString::fromUtf8("rbtn_Continuous"));
        rbtn_Continuous->setGeometry(QRect(220, 150, 115, 19));
        rbtn_Continuous->setChecked(true);
        buttonBox_2 = new QDialogButtonBox(Setting_ModulationCharacteristic);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(30, 350, 341, 32));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        group_Limits = new QGroupBox(Setting_ModulationCharacteristic);
        group_Limits->setObjectName(QString::fromUtf8("group_Limits"));
        group_Limits->setGeometry(QRect(10, 190, 361, 151));
        label_5 = new QLabel(group_Limits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 20, 141, 21));
        le_OverF1avg = new QLineEdit(group_Limits);
        le_OverF1avg->setObjectName(QString::fromUtf8("le_OverF1avg"));
        le_OverF1avg->setGeometry(QRect(230, 20, 51, 21));
        le_LessF1avg = new QLineEdit(group_Limits);
        le_LessF1avg->setObjectName(QString::fromUtf8("le_LessF1avg"));
        le_LessF1avg->setGeometry(QRect(230, 50, 51, 21));
        le_LessF2max = new QLineEdit(group_Limits);
        le_LessF2max->setObjectName(QString::fromUtf8("le_LessF2max"));
        le_LessF2max->setGeometry(QRect(230, 80, 51, 21));
        label_6 = new QLabel(group_Limits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 20, 41, 21));
        label_9 = new QLabel(group_Limits);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 50, 141, 21));
        label_10 = new QLabel(group_Limits);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 80, 151, 21));
        label_11 = new QLabel(group_Limits);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(290, 50, 41, 21));
        label_12 = new QLabel(group_Limits);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(290, 80, 41, 21));
        label_13 = new QLabel(group_Limits);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 110, 151, 21));
        le_OverF2avgOrF1avg = new QLineEdit(group_Limits);
        le_OverF2avgOrF1avg->setObjectName(QString::fromUtf8("le_OverF2avgOrF1avg"));
        le_OverF2avgOrF1avg->setGeometry(QRect(230, 110, 51, 21));

        retranslateUi(Setting_ModulationCharacteristic);

        QMetaObject::connectSlotsByName(Setting_ModulationCharacteristic);
    } // setupUi

    void retranslateUi(QDialog *Setting_ModulationCharacteristic)
    {
        Setting_ModulationCharacteristic->setWindowTitle(QApplication::translate("Setting_ModulationCharacteristic", "Dialog", nullptr));
        group_Conditions->setTitle(QApplication::translate("Setting_ModulationCharacteristic", "Conditions", nullptr));
        label->setText(QApplication::translate("Setting_ModulationCharacteristic", "Number of Packets", nullptr));
        le_PacketsNumber->setText(QApplication::translate("Setting_ModulationCharacteristic", "10", nullptr));
        checkBox->setText(QApplication::translate("Setting_ModulationCharacteristic", "Low", nullptr));
        checkBox_2->setText(QApplication::translate("Setting_ModulationCharacteristic", "Medium", nullptr));
        checkBox_3->setText(QApplication::translate("Setting_ModulationCharacteristic", "High", nullptr));
        le_Low->setText(QApplication::translate("Setting_ModulationCharacteristic", "2402", nullptr));
        le_Medium->setText(QApplication::translate("Setting_ModulationCharacteristic", "2440", nullptr));
        le_High->setText(QApplication::translate("Setting_ModulationCharacteristic", "2480", nullptr));
        label_2->setText(QApplication::translate("Setting_ModulationCharacteristic", "MHz", nullptr));
        label_3->setText(QApplication::translate("Setting_ModulationCharacteristic", "MHz", nullptr));
        label_4->setText(QApplication::translate("Setting_ModulationCharacteristic", "MHz", nullptr));
        label_7->setText(QApplication::translate("Setting_ModulationCharacteristic", "Toggle", nullptr));
        rbtn_Once->setText(QApplication::translate("Setting_ModulationCharacteristic", "Once", nullptr));
        rbtn_Continuous->setText(QApplication::translate("Setting_ModulationCharacteristic", "Continuous", nullptr));
        group_Limits->setTitle(QApplication::translate("Setting_ModulationCharacteristic", "Limits", nullptr));
        label_5->setText(QApplication::translate("Setting_ModulationCharacteristic", "F1avg \342\211\245", nullptr));
        le_OverF1avg->setText(QApplication::translate("Setting_ModulationCharacteristic", "225", nullptr));
        le_LessF1avg->setText(QApplication::translate("Setting_ModulationCharacteristic", "275", nullptr));
        le_LessF2max->setText(QApplication::translate("Setting_ModulationCharacteristic", "185", nullptr));
        label_6->setText(QApplication::translate("Setting_ModulationCharacteristic", "kHz", nullptr));
        label_9->setText(QApplication::translate("Setting_ModulationCharacteristic", "F1avg \342\211\244", nullptr));
        label_10->setText(QApplication::translate("Setting_ModulationCharacteristic", "F2max \342\211\245", nullptr));
        label_11->setText(QApplication::translate("Setting_ModulationCharacteristic", "kHz", nullptr));
        label_12->setText(QApplication::translate("Setting_ModulationCharacteristic", "kHz", nullptr));
        label_13->setText(QApplication::translate("Setting_ModulationCharacteristic", "F2avg / F1avg \342\211\245", nullptr));
        le_OverF2avgOrF1avg->setText(QApplication::translate("Setting_ModulationCharacteristic", "0.8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting_ModulationCharacteristic: public Ui_Setting_ModulationCharacteristic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_MODULATIONCHARACTERISTIC_H
