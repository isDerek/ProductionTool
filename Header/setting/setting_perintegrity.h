#ifndef SETTING_PERINTEGRITY_H
#define SETTING_PERINTEGRITY_H

#include <QDialog>

namespace Ui {
class Setting_PERIntegrity;
}

class Setting_PERIntegrity : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_PERIntegrity(QWidget *parent = nullptr);
    ~Setting_PERIntegrity();

private:
    Ui::Setting_PERIntegrity *ui;
};

#endif // SETTING_PERINTEGRITY_H
