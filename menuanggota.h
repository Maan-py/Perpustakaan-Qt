#ifndef MENUANGGOTA_H
#define MENUANGGOTA_H

#include <QDialog>
#include <mainmenu.h>
#include <menukelolaanggota.h>

namespace Ui {
class menuAnggota;
}

class menuAnggota : public QDialog
{
    Q_OBJECT

public:
    explicit menuAnggota(QWidget *parent = nullptr);
    ~menuAnggota();

private slots:
    void on_pushButton_menuUtama2_clicked();

    void on_pushButton_kelolaAnggota_clicked();

private:
    Ui::menuAnggota *ui;
};

#endif // MENUANGGOTA_H
