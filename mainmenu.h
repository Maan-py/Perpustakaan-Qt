#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include <menuanggota.h>

namespace Ui {
class mainMenu;
}

class mainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainMenu(QWidget *parent = nullptr);
    ~mainMenu();

private slots:
    void on_pushButton_anggota_clicked();

private:
    Ui::mainMenu *ui;
};

#endif // MAINMENU_H
