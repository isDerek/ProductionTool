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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PairingTool
{
public:
    QWidget *centralwidget;
    QGroupBox *group_Dongle;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *DPaityCmb_Dongle;
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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *PortNumCmb_Dongle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *DataBCmb_Dongle;
    QTableView *tbv_paringCode;
    QGroupBox *group_Mouse;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *DPaityCmb_Mouse;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *StopBCmb_Mouse;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *FlowCtrlCmb_Mouse;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QComboBox *baudRCmb_Mouse;
    QPushButton *OnOffBtn_Mouse;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QComboBox *PortNumCmb_Mouse;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QComboBox *DataBCmb_Mouse;
    QPushButton *btn_paringCode;
    QLabel *label_13;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PairingTool)
    {
        if (PairingTool->objectName().isEmpty())
            PairingTool->setObjectName(QString::fromUtf8("PairingTool"));
        PairingTool->resize(537, 508);
        centralwidget = new QWidget(PairingTool);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        group_Dongle = new QGroupBox(centralwidget);
        group_Dongle->setObjectName(QString::fromUtf8("group_Dongle"));
        group_Dongle->setGeometry(QRect(0, 10, 192, 242));
        group_Dongle->setMaximumSize(QSize(16777215, 300));
        gridLayout_2 = new QGridLayout(group_Dongle);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
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
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(baudRCmb_Dongle->sizePolicy().hasHeightForWidth());
        baudRCmb_Dongle->setSizePolicy(sizePolicy);
        baudRCmb_Dongle->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(baudRCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        OnOffBtn_Dongle = new QPushButton(group_Dongle);
        OnOffBtn_Dongle->setObjectName(QString::fromUtf8("OnOffBtn_Dongle"));

        gridLayout_2->addWidget(OnOffBtn_Dongle, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(group_Dongle);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        PortNumCmb_Dongle = new QComboBox(group_Dongle);
        PortNumCmb_Dongle->setObjectName(QString::fromUtf8("PortNumCmb_Dongle"));
        sizePolicy.setHeightForWidth(PortNumCmb_Dongle->sizePolicy().hasHeightForWidth());
        PortNumCmb_Dongle->setSizePolicy(sizePolicy);
        PortNumCmb_Dongle->setMinimumSize(QSize(100, 0));
        PortNumCmb_Dongle->setMaximumSize(QSize(1, 16777215));

        horizontalLayout->addWidget(PortNumCmb_Dongle);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

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

        tbv_paringCode = new QTableView(centralwidget);
        tbv_paringCode->setObjectName(QString::fromUtf8("tbv_paringCode"));
        tbv_paringCode->setGeometry(QRect(10, 260, 511, 192));
        group_Mouse = new QGroupBox(centralwidget);
        group_Mouse->setObjectName(QString::fromUtf8("group_Mouse"));
        group_Mouse->setGeometry(QRect(200, 10, 192, 242));
        group_Mouse->setMaximumSize(QSize(16777215, 300));
        gridLayout_3 = new QGridLayout(group_Mouse);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
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

        OnOffBtn_Mouse = new QPushButton(group_Mouse);
        OnOffBtn_Mouse->setObjectName(QString::fromUtf8("OnOffBtn_Mouse"));

        gridLayout_3->addWidget(OnOffBtn_Mouse, 6, 0, 1, 1);

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

        btn_paringCode = new QPushButton(centralwidget);
        btn_paringCode->setObjectName(QString::fromUtf8("btn_paringCode"));
        btn_paringCode->setGeometry(QRect(410, 220, 93, 28));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(410, 30, 131, 16));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(410, 80, 131, 16));
        PairingTool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PairingTool);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 26));
        PairingTool->setMenuBar(menubar);
        statusbar = new QStatusBar(PairingTool);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PairingTool->setStatusBar(statusbar);

        retranslateUi(PairingTool);

        QMetaObject::connectSlotsByName(PairingTool);
    } // setupUi

    void retranslateUi(QMainWindow *PairingTool)
    {
        PairingTool->setWindowTitle(QApplication::translate("PairingTool", "MainWindow", nullptr));
        group_Dongle->setTitle(QApplication::translate("PairingTool", "Dongle \344\270\262\345\217\243", nullptr));
        label_3->setText(QApplication::translate("PairingTool", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_6->setText(QApplication::translate("PairingTool", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_5->setText(QApplication::translate("PairingTool", "\346\265\201\346\216\247\345\210\266", nullptr));
        label_2->setText(QApplication::translate("PairingTool", "\346\263\242\347\211\271\347\216\207", nullptr));
        OnOffBtn_Dongle->setText(QApplication::translate("PairingTool", "\346\211\223\345\274\200", nullptr));
        label->setText(QApplication::translate("PairingTool", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_4->setText(QApplication::translate("PairingTool", "\346\225\260\346\215\256\344\275\215", nullptr));
        group_Mouse->setTitle(QApplication::translate("PairingTool", "Mouse \344\270\262\345\217\243", nullptr));
        label_7->setText(QApplication::translate("PairingTool", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_8->setText(QApplication::translate("PairingTool", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_9->setText(QApplication::translate("PairingTool", "\346\265\201\346\216\247\345\210\266", nullptr));
        label_10->setText(QApplication::translate("PairingTool", "\346\263\242\347\211\271\347\216\207", nullptr));
        OnOffBtn_Mouse->setText(QApplication::translate("PairingTool", "\346\211\223\345\274\200", nullptr));
        label_11->setText(QApplication::translate("PairingTool", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_12->setText(QApplication::translate("PairingTool", "\346\225\260\346\215\256\344\275\215", nullptr));
        btn_paringCode->setText(QApplication::translate("PairingTool", "\344\270\213\345\217\221\351\205\215\345\257\271\347\240\201", nullptr));
        label_13->setText(QApplication::translate("PairingTool", "Dongle Version:", nullptr));
        label_14->setText(QApplication::translate("PairingTool", "Mouse Version:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PairingTool: public Ui_PairingTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAIRINGTOOL_H
