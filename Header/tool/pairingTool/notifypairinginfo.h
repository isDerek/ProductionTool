#ifndef NOTIFYPAIRINGINFO_H
#define NOTIFYPAIRINGINFO_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class NotifyPairingInfo;
}

class NotifyPairingInfo : public QDialog
{
    Q_OBJECT

public:
    explicit NotifyPairingInfo(QWidget *parent = nullptr);
    ~NotifyPairingInfo();

private slots:


private:
    Ui::NotifyPairingInfo *ui;
    int getPairingCode();
    QSqlTableModel *pairingInfoModel;
};

#endif // NOTIFYPAIRINGINFO_H
