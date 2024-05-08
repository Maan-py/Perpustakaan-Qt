#include "mainmenu.h"
#include "ui_mainmenu.h"

mainMenu::mainMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainMenu)
{
    ui->setupUi(this);
}

mainMenu::~mainMenu()
{
    delete ui;
}

void mainMenu::on_pushButton_anggota_clicked()
{
    this->hide();
    menuAnggota menuAnggota;
    menuAnggota.setModal(true);
    menuAnggota.exec();
}

