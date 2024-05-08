#ifndef TAMBAHDATAANGGOTA_H
#define TAMBAHDATAANGGOTA_H

#include <QDialog>
#include <menukelolaanggota.h>

namespace Ui {
class tambahdataanggota;
}

class tambahdataanggota : public QDialog
{
    Q_OBJECT

public:
    explicit tambahdataanggota(QWidget *parent = nullptr);
    ~tambahdataanggota();

private slots:
    void on_pushButton_kelolaAnggota_clicked();

private:
    Ui::tambahdataanggota *ui;
};

#endif // TAMBAHDATAANGGOTA_H
