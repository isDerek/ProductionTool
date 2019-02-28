#ifndef SETTING_CARRIEROFFSETANDDRIFT_H
#define SETTING_CARRIEROFFSETANDDRIFT_H

#include <QDialog>

namespace Ui {
class Setting_CarrierOffsetAndDrift;
}

class Setting_CarrierOffsetAndDrift : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_CarrierOffsetAndDrift(QWidget *parent = nullptr);
    ~Setting_CarrierOffsetAndDrift();

private:
    Ui::Setting_CarrierOffsetAndDrift *ui;
};

#endif // SETTING_CARRIEROFFSETANDDRIFT_H
