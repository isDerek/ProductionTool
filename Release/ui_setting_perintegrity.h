/********************************************************************************
** Form generated from reading UI file 'setting_perintegrity.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_PERINTEGRITY_H
#define UI_SETTING_PERINTEGRITY_H

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

class Ui_Setting_PERIntegrity
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *group_Conditions;
    QLabel *label;
    QLineEdit *le_PacketsNumber;
    QCheckBox *checkBox_2;
    QLineEdit *le_Medium;
    QLabel *label_3;
    QLabel *label_7;
    QRadioButton *rbtn_Random;
    QRadioButton *rbtn_Fixed;
    QLabel *label_2;
    QLineEdit *le_CycleNumber;
    QLabel *label_4;
    QLineEdit *le_PowerLevel;
    QLabel *label_8;
    QGroupBox *group_Limits;
    QLabel *label_5;
    QLineEdit *le_OverPERResult;
    QLineEdit *le_LessPERResult;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_11;

    void setupUi(QDialog *Setting_PERIntegrity)
    {
        if (Setting_PERIntegrity->objectName().isEmpty())
            Setting_PERIntegrity->setObjectName(QString::fromUtf8("Setting_PERIntegrity"));
        Setting_PERIntegrity->resize(384, 325);
        buttonBox = new QDialogButtonBox(Setting_PERIntegrity);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        group_Conditions = new QGroupBox(Setting_PERIntegrity);
        group_Conditions->setObjectName(QString::fromUtf8("group_Conditions"));
        group_Conditions->setGeometry(QRect(10, 0, 361, 181));
        label = new QLabel(group_Conditions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 21));
        le_PacketsNumber = new QLineEdit(group_Conditions);
        le_PacketsNumber->setObjectName(QString::fromUtf8("le_PacketsNumber"));
        le_PacketsNumber->setGeometry(QRect(230, 20, 51, 21));
        checkBox_2 = new QCheckBox(group_Conditions);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(60, 50, 91, 19));
        checkBox_2->setChecked(true);
        le_Medium = new QLineEdit(group_Conditions);
        le_Medium->setObjectName(QString::fromUtf8("le_Medium"));
        le_Medium->setGeometry(QRect(230, 50, 51, 21));
        label_3 = new QLabel(group_Conditions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 50, 41, 21));
        label_7 = new QLabel(group_Conditions);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 140, 72, 21));
        rbtn_Random = new QRadioButton(group_Conditions);
        rbtn_Random->setObjectName(QString::fromUtf8("rbtn_Random"));
        rbtn_Random->setGeometry(QRect(140, 140, 115, 19));
        rbtn_Random->setChecked(true);
        rbtn_Fixed = new QRadioButton(group_Conditions);
        rbtn_Fixed->setObjectName(QString::fromUtf8("rbtn_Fixed"));
        rbtn_Fixed->setGeometry(QRect(240, 140, 115, 19));
        rbtn_Fixed->setChecked(false);
        label_2 = new QLabel(group_Conditions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 131, 21));
        le_CycleNumber = new QLineEdit(group_Conditions);
        le_CycleNumber->setObjectName(QString::fromUtf8("le_CycleNumber"));
        le_CycleNumber->setGeometry(QRect(230, 80, 51, 21));
        label_4 = new QLabel(group_Conditions);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 110, 131, 21));
        le_PowerLevel = new QLineEdit(group_Conditions);
        le_PowerLevel->setObjectName(QString::fromUtf8("le_PowerLevel"));
        le_PowerLevel->setGeometry(QRect(230, 110, 51, 21));
        label_8 = new QLabel(group_Conditions);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 110, 41, 21));
        group_Limits = new QGroupBox(Setting_PERIntegrity);
        group_Limits->setObjectName(QString::fromUtf8("group_Limits"));
        group_Limits->setGeometry(QRect(10, 190, 361, 81));
        label_5 = new QLabel(group_Limits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 20, 141, 21));
        le_OverPERResult = new QLineEdit(group_Limits);
        le_OverPERResult->setObjectName(QString::fromUtf8("le_OverPERResult"));
        le_OverPERResult->setGeometry(QRect(230, 20, 51, 21));
        le_LessPERResult = new QLineEdit(group_Limits);
        le_LessPERResult->setObjectName(QString::fromUtf8("le_LessPERResult"));
        le_LessPERResult->setGeometry(QRect(230, 50, 51, 21));
        label_6 = new QLabel(group_Limits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 20, 41, 21));
        label_9 = new QLabel(group_Limits);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 50, 141, 21));
        label_11 = new QLabel(group_Limits);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(290, 50, 41, 21));

        retranslateUi(Setting_PERIntegrity);
        QObject::connect(buttonBox, SIGNAL(accepted()), Setting_PERIntegrity, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Setting_PERIntegrity, SLOT(reject()));

        QMetaObject::connectSlotsByName(Setting_PERIntegrity);
    } // setupUi

    void retranslateUi(QDialog *Setting_PERIntegrity)
    {
        Setting_PERIntegrity->setWindowTitle(QApplication::translate("Setting_PERIntegrity", "Dialog", nullptr));
        group_Conditions->setTitle(QApplication::translate("Setting_PERIntegrity", "Conditions", nullptr));
        label->setText(QApplication::translate("Setting_PERIntegrity", "Number of Packets", nullptr));
        le_PacketsNumber->setText(QApplication::translate("Setting_PERIntegrity", "1500", nullptr));
        checkBox_2->setText(QApplication::translate("Setting_PERIntegrity", "Medium", nullptr));
        le_Medium->setText(QApplication::translate("Setting_PERIntegrity", "2440", nullptr));
        label_3->setText(QApplication::translate("Setting_PERIntegrity", "MHz", nullptr));
        label_7->setText(QApplication::translate("Setting_PERIntegrity", "Packet M", nullptr));
        rbtn_Random->setText(QApplication::translate("Setting_PERIntegrity", "Random", nullptr));
        rbtn_Fixed->setText(QApplication::translate("Setting_PERIntegrity", "Fixed", nullptr));
        label_2->setText(QApplication::translate("Setting_PERIntegrity", "Number of Cycle", nullptr));
        le_CycleNumber->setText(QApplication::translate("Setting_PERIntegrity", "3", nullptr));
        label_4->setText(QApplication::translate("Setting_PERIntegrity", "Power Level", nullptr));
        le_PowerLevel->setText(QApplication::translate("Setting_PERIntegrity", "-30", nullptr));
        label_8->setText(QApplication::translate("Setting_PERIntegrity", "dBm", nullptr));
        group_Limits->setTitle(QApplication::translate("Setting_PERIntegrity", "Limits", nullptr));
        label_5->setText(QApplication::translate("Setting_PERIntegrity", "PER Result \342\211\245", nullptr));
        le_OverPERResult->setText(QApplication::translate("Setting_PERIntegrity", "50", nullptr));
        le_LessPERResult->setText(QApplication::translate("Setting_PERIntegrity", "65.4", nullptr));
        label_6->setText(QApplication::translate("Setting_PERIntegrity", "%", nullptr));
        label_9->setText(QApplication::translate("Setting_PERIntegrity", "PER Result \342\211\244", nullptr));
        label_11->setText(QApplication::translate("Setting_PERIntegrity", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting_PERIntegrity: public Ui_Setting_PERIntegrity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_PERINTEGRITY_H
