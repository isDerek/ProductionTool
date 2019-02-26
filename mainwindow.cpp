#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QHeaderView>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Production Tool");
    TableViewInit();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSetting_triggered()
{
    setting->show();
}

void MainWindow::TableViewInit()
{
    QStandardItemModel *tableModel = new QStandardItemModel();
    // 添加 tablemodel 对象
    tableModel->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("Item")));
    tableModel->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("Result")));
    ui->tbv_Show->setModel(tableModel);
    // 固定列宽
    ui->tbv_Show->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
    ui->tbv_Show->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);
    // 设置列宽
    ui->tbv_Show->setColumnWidth(0,298);
    ui->tbv_Show->setColumnWidth(1,298);
    // 设置表格的单元为只读属性，不能编辑
    ui->tbv_Show->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 不显示行头
    ui->tbv_Show->verticalHeader()->hide();
}

void MainWindow::on_btn_Firmware_clicked()
{

}

void MainWindow::on_btn_Data_clicked()
{

}

void MainWindow::on_btn_NVDS_clicked()
{

}

void MainWindow::on_actionParingTool_triggered()
{
    pairingtool->show();
}
