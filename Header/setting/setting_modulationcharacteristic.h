#ifndef SETTING_MODULATIONCHARACTERISTIC_H
#define SETTING_MODULATIONCHARACTERISTIC_H

#include <QDialog>

namespace Ui {
class Setting_ModulationCharacteristic;
}

class Setting_ModulationCharacteristic : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_ModulationCharacteristic(QWidget *parent = nullptr);
    ~Setting_ModulationCharacteristic();

private:
    Ui::Setting_ModulationCharacteristic *ui;
};

#endif // SETTING_MODULATIONCHARACTERISTIC_H
