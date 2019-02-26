#ifndef SETTING_OUTPUTPOWER_H
#define SETTING_OUTPUTPOWER_H

#include <QDialog>

namespace Ui {
class Setting_OutputPower;
}

class Setting_OutputPower : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_OutputPower(QWidget *parent = nullptr);
    ~Setting_OutputPower();

private:
    Ui::Setting_OutputPower *ui;
};

#endif // SETTING_OUTPUTPOWER_H
