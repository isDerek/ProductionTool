/********************************************************************************
** Form generated from reading UI file 'setting_carrieroffsetanddrift.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_CARRIEROFFSETANDDRIFT_H
#define UI_SETTING_CARRIEROFFSETANDDRIFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Setting_CarrierOffsetAndDrift
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
    QGroupBox *group_Limits;
    QLabel *label_5;
    QLineEdit *le_OverMaxPlusFn;
    QLineEdit *le_LessMaxSubtractFn;
    QLineEdit *le_LessDriftRate;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *le_LessDrift;
    QLabel *label_14;

    void setupUi(QDialog *Setting_CarrierOffsetAndDrift)
    {
        if (Setting_CarrierOffsetAndDrift->objectName().isEmpty())
            Setting_CarrierOffsetAndDrift->setObjectName(QString::fromUtf8("Setting_CarrierOffsetAndDrift"));
        Setting_CarrierOffsetAndDrift->resize(382, 360);
        buttonBox = new QDialogButtonBox(Setting_CarrierOffsetAndDrift);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 310, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        group_Conditions = new QGroupBox(Setting_CarrierOffsetAndDrift);
        group_Conditions->setObjectName(QString::fromUtf8("group_Conditions"));
        group_Conditions->setGeometry(QRect(10, 0, 361, 151));
        label = new QLabel(group_Conditions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 21));
        le_PacketsNumber = new QLineEdit(group_Conditions);
        le_PacketsNumber->setObjectName(QString::fromUtf8("le_PacketsNumber"));
        le_PacketsNumber->setGeometry(QRect(230, 20, 51, 21));
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
        group_Limits = new QGroupBox(Setting_CarrierOffsetAndDrift);
        group_Limits->setObjectName(QString::fromUtf8("group_Limits"));
        group_Limits->setGeometry(QRect(10, 150, 361, 151));
        label_5 = new QLabel(group_Limits);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 20, 141, 21));
        le_OverMaxPlusFn = new QLineEdit(group_Limits);
        le_OverMaxPlusFn->setObjectName(QString::fromUtf8("le_OverMaxPlusFn"));
        le_OverMaxPlusFn->setGeometry(QRect(230, 20, 51, 21));
        le_LessMaxSubtractFn = new QLineEdit(group_Limits);
        le_LessMaxSubtractFn->setObjectName(QString::fromUtf8("le_LessMaxSubtractFn"));
        le_LessMaxSubtractFn->setGeometry(QRect(230, 50, 51, 21));
        le_LessDriftRate = new QLineEdit(group_Limits);
        le_LessDriftRate->setObjectName(QString::fromUtf8("le_LessDriftRate"));
        le_LessDriftRate->setGeometry(QRect(230, 80, 51, 21));
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
        label_12->setGeometry(QRect(290, 80, 71, 21));
        label_13 = new QLabel(group_Limits);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(290, 110, 41, 21));
        le_LessDrift = new QLineEdit(group_Limits);
        le_LessDrift->setObjectName(QString::fromUtf8("le_LessDrift"));
        le_LessDrift->setGeometry(QRect(230, 110, 51, 21));
        label_14 = new QLabel(group_Limits);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 110, 151, 21));

        retranslateUi(Setting_CarrierOffsetAndDrift);
        QObject::connect(buttonBox, SIGNAL(accepted()), Setting_CarrierOffsetAndDrift, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Setting_CarrierOffsetAndDrift, SLOT(reject()));

        QMetaObject::connectSlotsByName(Setting_CarrierOffsetAndDrift);
    } // setupUi

    void retranslateUi(QDialog *Setting_CarrierOffsetAndDrift)
    {
        Setting_CarrierOffsetAndDrift->setWindowTitle(QApplication::translate("Setting_CarrierOffsetAndDrift", "Dialog", nullptr));
        group_Conditions->setTitle(QApplication::translate("Setting_CarrierOffsetAndDrift", "Conditions", nullptr));
        label->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Number of Packets", nullptr));
        le_PacketsNumber->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "10", nullptr));
        checkBox->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Low", nullptr));
        checkBox_2->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Medium", nullptr));
        checkBox_3->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "High", nullptr));
        le_Low->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "2402", nullptr));
        le_Medium->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "2440", nullptr));
        le_High->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "2480", nullptr));
        label_2->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "MHz", nullptr));
        label_3->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "MHz", nullptr));
        label_4->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "MHz", nullptr));
        group_Limits->setTitle(QApplication::translate("Setting_CarrierOffsetAndDrift", "Limits", nullptr));
        label_5->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Max + Fn \342\211\245", nullptr));
        le_OverMaxPlusFn->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "150", nullptr));
        le_LessMaxSubtractFn->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "150", nullptr));
        le_LessDriftRate->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "20", nullptr));
        label_6->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "kHz", nullptr));
        label_9->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Max - Fn \342\211\244", nullptr));
        label_10->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Drift Rate \302\261\342\211\244", nullptr));
        label_11->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "kHz", nullptr));
        label_12->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "kHz/50us", nullptr));
        label_13->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "kHz", nullptr));
        le_LessDrift->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "50", nullptr));
        label_14->setText(QApplication::translate("Setting_CarrierOffsetAndDrift", "Drift \302\261\342\211\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting_CarrierOffsetAndDrift: public Ui_Setting_CarrierOffsetAndDrift {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_CARRIEROFFSETANDDRIFT_H
