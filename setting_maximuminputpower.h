#ifndef SETTING_MAXIMUMINPUTPOWER_H
#define SETTING_MAXIMUMINPUTPOWER_H

#include <QDialog>

namespace Ui {
class Setting_MaximumInputPower;
}

class Setting_MaximumInputPower : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_MaximumInputPower(QWidget *parent = nullptr);
    ~Setting_MaximumInputPower();

private:
    Ui::Setting_MaximumInputPower *ui;
};

#endif // SETTING_MAXIMUMINPUTPOWER_H
