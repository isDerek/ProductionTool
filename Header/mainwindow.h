#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "setting.h"
#include "pairingtool.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void TableViewInit();

private slots:
    void on_actionSetting_triggered();

    void on_btn_Firmware_clicked();

    void on_btn_Data_clicked();

    void on_btn_NVDS_clicked();

    void on_actionParingTool_triggered();

private:
    Ui::MainWindow *ui;
    Setting *setting = new Setting;
    PairingTool *pairingtool = new PairingTool;
};

#endif // MAINWINDOW_H
