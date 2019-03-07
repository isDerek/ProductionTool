/********************************************************************************
** Form generated from reading UI file 'pairingtool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAIRINGTOOL_H
#define UI_PAIRINGTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PairingTool
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *group_Dongle;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *PortNumCmb_Dongle;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *StopBCmb_Dongle;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *FlowCtrlCmb_Dongle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baudRCmb_Dongle;
    QPushButton *OnOffBtn_Dongle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *DataBCmb_Dongle;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *DPaityCmb_Dongle;
    QGroupBox *group_Mouse;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *StopBCmb_Mouse;
    QPushButton *OnOffBtn_Mouse;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QComboBox *DataBCmb_Mouse;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *FlowCtrlCmb_Mouse;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QComboBox *baudRCmb_Mouse;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QComboBox *PortNumCmb_Mouse;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *DPaityCmb_Mouse;
    QPushButton *btn_paringCode;
    QGroupBox *group_dongleData;
    QTextEdit *te_dongleRevData;
    QGroupBox *group_mouseData;
    QTextEdit *te_mouseRevData;
    QLabel *label_13;
    QLineEdit *le_mouseMAC;
    QLineEdit *le_dongleMAC;
    QLineEdit *le_pairingCode;
    QLabel *label_14;
    QLabel *label_15;
    QGroupBox *groupBox;
    QPushButton *btn_checkDongleVersionId;
    QPushButton *btn_checkDongleMACAddress;
    QPushButton *btn_dongleDataClear;
    QGroupBox *groupBox_2;
    QPushButton *btn_checkMouseVersionId;
    QPushButton *btn_checkMouseMACAddress;
    QPushButton *btn_mouseDataClear;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *le_dongleVersion;
    QLineEdit *le_mouseVersion;
    QWidget *tab_2;
    QTableView *tbv_Dongle;
    QWidget *tab_3;
    QTableView *tbv_Mouse;
    QWidget *tab_4;
    QTableView *tbv_ParingInfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PairingTool)
    {
        if (PairingTool->objectName().isEmpty())
            PairingTool->setObjectName(QString::fromUtf8("PairingTool"));
        PairingTool->resize(741, 749);
        centralwidget = new QWidget(PairingTool);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 741, 701));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        group_Dongle = new QGroupBox(tab);
        group_Dongle->setObjectName(QString::fromUtf8("group_Dongle"));
        group_Dongle->setGeometry(QRect(10, 10, 192, 242));
        group_Dongle->setMaximumSize(QSize(16777215, 300));
        gridLayout_2 = new QGridLayout(group_Dongle);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(group_Dongle);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        PortNumCmb_Dongle = new QComboBox(group_Dongle);
        PortNumCmb_Dongle->setObjectName(QString::fromUtf8("PortNumCmb_Dongle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PortNumCmb_Dongle->sizePolicy().hasHeightForWidth());
        PortNumCmb_Dongle->setSizePolicy(sizePolicy);
        PortNumCmb_Dongle->setMinimumSize(QSize(100, 0));
        PortNumCmb_Dongle->setMaximumSize(QSize(1, 16777215));

        horizontalLayout->addWidget(PortNumCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(group_Dongle);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        StopBCmb_Dongle = new QComboBox(group_Dongle);
        StopBCmb_Dongle->setObjectName(QString::fromUtf8("StopBCmb_Dongle"));
        StopBCmb_Dongle->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(StopBCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(group_Dongle);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        FlowCtrlCmb_Dongle = new QComboBox(group_Dongle);
        FlowCtrlCmb_Dongle->setObjectName(QString::fromUtf8("FlowCtrlCmb_Dongle"));
        FlowCtrlCmb_Dongle->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(FlowCtrlCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(group_Dongle);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudRCmb_Dongle = new QComboBox(group_Dongle);
        baudRCmb_Dongle->setObjectName(QString::fromUtf8("baudRCmb_Dongle"));
        sizePolicy.setHeightForWidth(baudRCmb_Dongle->sizePolicy().hasHeightForWidth());
        baudRCmb_Dongle->setSizePolicy(sizePolicy);
        baudRCmb_Dongle->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(baudRCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        OnOffBtn_Dongle = new QPushButton(group_Dongle);
        OnOffBtn_Dongle->setObjectName(QString::fromUtf8("OnOffBtn_Dongle"));

        gridLayout_2->addWidget(OnOffBtn_Dongle, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(group_Dongle);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        DataBCmb_Dongle = new QComboBox(group_Dongle);
        DataBCmb_Dongle->setObjectName(QString::fromUtf8("DataBCmb_Dongle"));
        DataBCmb_Dongle->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(DataBCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(group_Dongle);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        DPaityCmb_Dongle = new QComboBox(group_Dongle);
        DPaityCmb_Dongle->setObjectName(QString::fromUtf8("DPaityCmb_Dongle"));
        DPaityCmb_Dongle->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(DPaityCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        group_Mouse = new QGroupBox(tab);
        group_Mouse->setObjectName(QString::fromUtf8("group_Mouse"));
        group_Mouse->setGeometry(QRect(220, 10, 192, 242));
        group_Mouse->setMaximumSize(QSize(16777215, 300));
        gridLayout_3 = new QGridLayout(group_Mouse);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(group_Mouse);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        StopBCmb_Mouse = new QComboBox(group_Mouse);
        StopBCmb_Mouse->setObjectName(QString::fromUtf8("StopBCmb_Mouse"));
        StopBCmb_Mouse->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(StopBCmb_Mouse);


        gridLayout_3->addLayout(horizontalLayout_8, 4, 0, 1, 1);

        OnOffBtn_Mouse = new QPushButton(group_Mouse);
        OnOffBtn_Mouse->setObjectName(QString::fromUtf8("OnOffBtn_Mouse"));

        gridLayout_3->addWidget(OnOffBtn_Mouse, 6, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(group_Mouse);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        DataBCmb_Mouse = new QComboBox(group_Mouse);
        DataBCmb_Mouse->setObjectName(QString::fromUtf8("DataBCmb_Mouse"));
        DataBCmb_Mouse->setMinimumSize(QSize(100, 0));

        horizontalLayout_12->addWidget(DataBCmb_Mouse);


        gridLayout_3->addLayout(horizontalLayout_12, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(group_Mouse);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        FlowCtrlCmb_Mouse = new QComboBox(group_Mouse);
        FlowCtrlCmb_Mouse->setObjectName(QString::fromUtf8("FlowCtrlCmb_Mouse"));
        FlowCtrlCmb_Mouse->setMinimumSize(QSize(100, 0));

        horizontalLayout_9->addWidget(FlowCtrlCmb_Mouse);


        gridLayout_3->addLayout(horizontalLayout_9, 5, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(group_Mouse);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        baudRCmb_Mouse = new QComboBox(group_Mouse);
        baudRCmb_Mouse->setObjectName(QString::fromUtf8("baudRCmb_Mouse"));
        sizePolicy.setHeightForWidth(baudRCmb_Mouse->sizePolicy().hasHeightForWidth());
        baudRCmb_Mouse->setSizePolicy(sizePolicy);
        baudRCmb_Mouse->setMinimumSize(QSize(100, 0));

        horizontalLayout_10->addWidget(baudRCmb_Mouse);


        gridLayout_3->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(group_Mouse);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        PortNumCmb_Mouse = new QComboBox(group_Mouse);
        PortNumCmb_Mouse->setObjectName(QString::fromUtf8("PortNumCmb_Mouse"));
        sizePolicy.setHeightForWidth(PortNumCmb_Mouse->sizePolicy().hasHeightForWidth());
        PortNumCmb_Mouse->setSizePolicy(sizePolicy);
        PortNumCmb_Mouse->setMinimumSize(QSize(100, 0));
        PortNumCmb_Mouse->setMaximumSize(QSize(1, 16777215));

        horizontalLayout_11->addWidget(PortNumCmb_Mouse);


        gridLayout_3->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(group_Mouse);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        DPaityCmb_Mouse = new QComboBox(group_Mouse);
        DPaityCmb_Mouse->setObjectName(QString::fromUtf8("DPaityCmb_Mouse"));
        DPaityCmb_Mouse->setMinimumSize(QSize(100, 0));

        horizontalLayout_7->addWidget(DPaityCmb_Mouse);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        btn_paringCode = new QPushButton(tab);
        btn_paringCode->setObjectName(QString::fromUtf8("btn_paringCode"));
        btn_paringCode->setGeometry(QRect(630, 160, 81, 28));
        group_dongleData = new QGroupBox(tab);
        group_dongleData->setObjectName(QString::fromUtf8("group_dongleData"));
        group_dongleData->setGeometry(QRect(0, 390, 361, 281));
        te_dongleRevData = new QTextEdit(group_dongleData);
        te_dongleRevData->setObjectName(QString::fromUtf8("te_dongleRevData"));
        te_dongleRevData->setGeometry(QRect(10, 20, 341, 251));
        group_mouseData = new QGroupBox(tab);
        group_mouseData->setObjectName(QString::fromUtf8("group_mouseData"));
        group_mouseData->setGeometry(QRect(370, 390, 361, 281));
        te_mouseRevData = new QTextEdit(group_mouseData);
        te_mouseRevData->setObjectName(QString::fromUtf8("te_mouseRevData"));
        te_mouseRevData->setGeometry(QRect(10, 20, 341, 251));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(450, 60, 141, 41));
        le_mouseMAC = new QLineEdit(tab);
        le_mouseMAC->setObjectName(QString::fromUtf8("le_mouseMAC"));
        le_mouseMAC->setGeometry(QRect(600, 120, 113, 21));
        le_dongleMAC = new QLineEdit(tab);
        le_dongleMAC->setObjectName(QString::fromUtf8("le_dongleMAC"));
        le_dongleMAC->setGeometry(QRect(600, 70, 113, 21));
        le_pairingCode = new QLineEdit(tab);
        le_pairingCode->setObjectName(QString::fromUtf8("le_pairingCode"));
        le_pairingCode->setGeometry(QRect(600, 20, 113, 21));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(520, 10, 61, 41));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(460, 110, 141, 41));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 259, 191, 121));
        btn_checkDongleVersionId = new QPushButton(groupBox);
        btn_checkDongleVersionId->setObjectName(QString::fromUtf8("btn_checkDongleVersionId"));
        btn_checkDongleVersionId->setGeometry(QRect(20, 20, 121, 28));
        btn_checkDongleMACAddress = new QPushButton(groupBox);
        btn_checkDongleMACAddress->setObjectName(QString::fromUtf8("btn_checkDongleMACAddress"));
        btn_checkDongleMACAddress->setGeometry(QRect(20, 50, 121, 28));
        btn_dongleDataClear = new QPushButton(groupBox);
        btn_dongleDataClear->setObjectName(QString::fromUtf8("btn_dongleDataClear"));
        btn_dongleDataClear->setGeometry(QRect(20, 80, 141, 28));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 260, 191, 121));
        btn_checkMouseVersionId = new QPushButton(groupBox_2);
        btn_checkMouseVersionId->setObjectName(QString::fromUtf8("btn_checkMouseVersionId"));
        btn_checkMouseVersionId->setGeometry(QRect(20, 20, 121, 28));
        btn_checkMouseMACAddress = new QPushButton(groupBox_2);
        btn_checkMouseMACAddress->setObjectName(QString::fromUtf8("btn_checkMouseMACAddress"));
        btn_checkMouseMACAddress->setGeometry(QRect(20, 50, 121, 28));
        btn_mouseDataClear = new QPushButton(groupBox_2);
        btn_mouseDataClear->setObjectName(QString::fromUtf8("btn_mouseDataClear"));
        btn_mouseDataClear->setGeometry(QRect(20, 80, 141, 28));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(450, 210, 121, 16));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(450, 270, 121, 16));
        le_dongleVersion = new QLineEdit(tab);
        le_dongleVersion->setObjectName(QString::fromUtf8("le_dongleVersion"));
        le_dongleVersion->setGeometry(QRect(450, 240, 113, 21));
        le_mouseVersion = new QLineEdit(tab);
        le_mouseVersion->setObjectName(QString::fromUtf8("le_mouseVersion"));
        le_mouseVersion->setGeometry(QRect(450, 300, 113, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tbv_Dongle = new QTableView(tab_2);
        tbv_Dongle->setObjectName(QString::fromUtf8("tbv_Dongle"));
        tbv_Dongle->setGeometry(QRect(210, 10, 500, 471));
        tbv_Dongle->setMinimumSize(QSize(500, 0));
        tbv_Dongle->setMaximumSize(QSize(500, 16777215));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tbv_Mouse = new QTableView(tab_3);
        tbv_Mouse->setObjectName(QString::fromUtf8("tbv_Mouse"));
        tbv_Mouse->setGeometry(QRect(210, 10, 500, 471));
        tbv_Mouse->setMinimumSize(QSize(500, 0));
        tbv_Mouse->setMaximumSize(QSize(500, 16777215));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tbv_ParingInfo = new QTableView(tab_4);
        tbv_ParingInfo->setObjectName(QString::fromUtf8("tbv_ParingInfo"));
        tbv_ParingInfo->setGeometry(QRect(210, 10, 500, 471));
        tbv_ParingInfo->setMinimumSize(QSize(500, 0));
        tbv_ParingInfo->setMaximumSize(QSize(500, 16777215));
        tabWidget->addTab(tab_4, QString());
        PairingTool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PairingTool);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 741, 26));
        PairingTool->setMenuBar(menubar);
        statusbar = new QStatusBar(PairingTool);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PairingTool->setStatusBar(statusbar);

        retranslateUi(PairingTool);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PairingTool);
    } // setupUi

    void retranslateUi(QMainWindow *PairingTool)
    {
        PairingTool->setWindowTitle(QApplication::translate("PairingTool", "MainWindow", nullptr));
        group_Dongle->setTitle(QApplication::translate("PairingTool", "Dongle \344\270\262\345\217\243", nullptr));
        label->setText(QApplication::translate("PairingTool", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_6->setText(QApplication::translate("PairingTool", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_5->setText(QApplication::translate("PairingTool", "\346\265\201\346\216\247\345\210\266", nullptr));
        label_2->setText(QApplication::translate("PairingTool", "\346\263\242\347\211\271\347\216\207", nullptr));
        OnOffBtn_Dongle->setText(QApplication::translate("PairingTool", "\346\211\223\345\274\200", nullptr));
        label_4->setText(QApplication::translate("PairingTool", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_3->setText(QApplication::translate("PairingTool", "\346\240\241\351\252\214\344\275\215", nullptr));
        group_Mouse->setTitle(QApplication::translate("PairingTool", "Mouse \344\270\262\345\217\243", nullptr));
        label_8->setText(QApplication::translate("PairingTool", "\345\201\234\346\255\242\344\275\215", nullptr));
        OnOffBtn_Mouse->setText(QApplication::translate("PairingTool", "\346\211\223\345\274\200", nullptr));
        label_12->setText(QApplication::translate("PairingTool", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_9->setText(QApplication::translate("PairingTool", "\346\265\201\346\216\247\345\210\266", nullptr));
        label_10->setText(QApplication::translate("PairingTool", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_11->setText(QApplication::translate("PairingTool", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_7->setText(QApplication::translate("PairingTool", "\346\240\241\351\252\214\344\275\215", nullptr));
        btn_paringCode->setText(QApplication::translate("PairingTool", "\345\210\206\351\205\215\351\205\215\345\257\271\347\240\201", nullptr));
        group_dongleData->setTitle(QApplication::translate("PairingTool", "Dongle \346\225\260\346\215\256\347\252\227\345\217\243", nullptr));
        group_mouseData->setTitle(QApplication::translate("PairingTool", "Mouse \346\225\260\346\215\256\347\252\227\345\217\243", nullptr));
        label_13->setText(QApplication::translate("PairingTool", "Dongle MAC \345\234\260\345\235\200\357\274\232", nullptr));
        le_dongleMAC->setText(QString());
        label_14->setText(QApplication::translate("PairingTool", "\345\210\206\351\205\215\347\240\201\357\274\232", nullptr));
        label_15->setText(QApplication::translate("PairingTool", "Mouse MAC \345\234\260\345\235\200\357\274\232", nullptr));
        groupBox->setTitle(QApplication::translate("PairingTool", "Dongle \350\256\276\345\244\207\346\223\215\344\275\234", nullptr));
        btn_checkDongleVersionId->setText(QApplication::translate("PairingTool", "\346\237\245\350\257\242\347\211\210\346\234\254\345\217\267", nullptr));
        btn_checkDongleMACAddress->setText(QApplication::translate("PairingTool", "\346\237\245\350\257\242 MAC \345\234\260\345\235\200", nullptr));
        btn_dongleDataClear->setText(QApplication::translate("PairingTool", "\346\270\205\351\231\244 Dongle \347\252\227\345\217\243", nullptr));
        groupBox_2->setTitle(QApplication::translate("PairingTool", "Mouse \350\256\276\345\244\207\346\223\215\344\275\234", nullptr));
        btn_checkMouseVersionId->setText(QApplication::translate("PairingTool", "\346\237\245\350\257\242\347\211\210\346\234\254\345\217\267", nullptr));
        btn_checkMouseMACAddress->setText(QApplication::translate("PairingTool", "\346\237\245\350\257\242 MAC \345\234\260\345\235\200", nullptr));
        btn_mouseDataClear->setText(QApplication::translate("PairingTool", "\346\270\205\351\231\244 Mouse \347\252\227\345\217\243", nullptr));
        label_16->setText(QApplication::translate("PairingTool", "Dongle \347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        label_17->setText(QApplication::translate("PairingTool", "Mouse \347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PairingTool", "\350\256\276\345\244\207\346\223\215\344\275\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PairingTool", "Dongle \346\225\260\346\215\256\345\272\223\347\256\241\347\220\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PairingTool", "Mouse \346\225\260\346\215\256\345\272\223\347\256\241\347\220\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PairingTool", "PairingInfo \346\225\260\346\215\256\345\272\223\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PairingTool: public Ui_PairingTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAIRINGTOOL_H
