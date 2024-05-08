#ifndef MENUKELOLAANGGOTA_H
#define MENUKELOLAANGGOTA_H

#include <QDialog>
#include <menuanggota.h>
#include <tambahdataanggota.h>

namespace Ui {
class menuKelolaAnggota;
}

class menuKelolaAnggota : public QDialog
{
    Q_OBJECT

public:
    explicit menuKelolaAnggota(QWidget *parent = nullptr);
    ~menuKelolaAnggota();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::menuKelolaAnggota *ui;
};

#endif // MENUKELOLAANGGOTA_H
