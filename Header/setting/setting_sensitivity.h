#ifndef SETTING_SENSITIVITY_H
#define SETTING_SENSITIVITY_H

#include <QDialog>

namespace Ui {
class Setting_Sensitivity;
}

class Setting_Sensitivity : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_Sensitivity(QWidget *parent = nullptr);
    ~Setting_Sensitivity();

private:
    Ui::Setting_Sensitivity *ui;
};

#endif // SETTING_SENSITIVITY_H
