/********************************************************************************
** Form generated from reading UI file 'menuanggota.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUANGGOTA_H
#define UI_MENUANGGOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuAnggota
{
public:
    QPushButton *pushButton_kelolaAnggota;
    QPushButton *pushButton_2;
    QPushButton *pushButton_menuUtama2;

    void setupUi(QDialog *menuAnggota)
    {
        if (menuAnggota->objectName().isEmpty())
            menuAnggota->setObjectName("menuAnggota");
        menuAnggota->resize(524, 421);
        pushButton_kelolaAnggota = new QPushButton(menuAnggota);
        pushButton_kelolaAnggota->setObjectName("pushButton_kelolaAnggota");
        pushButton_kelolaAnggota->setGeometry(QRect(11, 85, 102, 29));
        pushButton_2 = new QPushButton(menuAnggota);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(11, 195, 127, 29));
        pushButton_menuUtama2 = new QPushButton(menuAnggota);
        pushButton_menuUtama2->setObjectName("pushButton_menuUtama2");
        pushButton_menuUtama2->setGeometry(QRect(11, 305, 170, 29));

        retranslateUi(menuAnggota);

        QMetaObject::connectSlotsByName(menuAnggota);
    } // setupUi

    void retranslateUi(QDialog *menuAnggota)
    {
        menuAnggota->setWindowTitle(QCoreApplication::translate("menuAnggota", "Dialog", nullptr));
        pushButton_kelolaAnggota->setText(QCoreApplication::translate("menuAnggota", "1. Kelola Data", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menuAnggota", "2. Tampilkan Data", nullptr));
        pushButton_menuUtama2->setText(QCoreApplication::translate("menuAnggota", "Kembali ke menu utama", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuAnggota: public Ui_menuAnggota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUANGGOTA_H
