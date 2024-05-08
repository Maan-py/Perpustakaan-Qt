#include "menuanggota.h"
#include "ui_menuanggota.h"

menuAnggota::menuAnggota(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuAnggota)
{
    ui->setupUi(this);
}

menuAnggota::~menuAnggota()
{
    delete ui;
}

void menuAnggota::on_pushButton_menuUtama2_clicked()
{
    this->hide();
    mainMenu mainMenu2;
    mainMenu2.setModal(true);
    mainMenu2.exec();
}


void menuAnggota::on_pushButton_kelolaAnggota_clicked()
{
    this->hide();
    menuKelolaAnggota menuKelolaAnggota;
    menuKelolaAnggota.setModal(true);
    menuKelolaAnggota.exec();
}

