#include "menukelolaanggota.h"
#include "ui_menukelolaanggota.h"

menuKelolaAnggota::menuKelolaAnggota(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menuKelolaAnggota)
{
    ui->setupUi(this);
}

menuKelolaAnggota::~menuKelolaAnggota()
{
    delete ui;
}

void menuKelolaAnggota::on_pushButton_4_clicked()
{
    this->hide();
    menuAnggota menuAnggota;
    menuAnggota.setModal(true);
    menuAnggota.exec();
}


void menuKelolaAnggota::on_pushButton_clicked()
{
    this->hide();
    tambahdataanggota mainMenu2;
    mainMenu2.setModal(true);
    mainMenu2.exec();
}

