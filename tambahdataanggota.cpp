#include "tambahdataanggota.h"
#include "ui_tambahdataanggota.h"

tambahdataanggota::tambahdataanggota(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tambahdataanggota)
{
    ui->setupUi(this);
}

tambahdataanggota::~tambahdataanggota()
{
    delete ui;
}

void tambahdataanggota::on_pushButton_kelolaAnggota_clicked()
{
    this->hide();
    menuKelolaAnggota menuKelolaAnggota;
    menuKelolaAnggota.setModal(true);
    menuKelolaAnggota.exec();
}

