/********************************************************************************
** Form generated from reading UI file 'menukelolaanggota.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUKELOLAANGGOTA_H
#define UI_MENUKELOLAANGGOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuKelolaAnggota
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *menuKelolaAnggota)
    {
        if (menuKelolaAnggota->objectName().isEmpty())
            menuKelolaAnggota->setObjectName("menuKelolaAnggota");
        menuKelolaAnggota->resize(616, 537);
        groupBox = new QGroupBox(menuKelolaAnggota);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 90, 381, 341));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 60, 131, 61));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 130, 131, 61));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 210, 131, 61));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 290, 83, 29));

        retranslateUi(menuKelolaAnggota);

        QMetaObject::connectSlotsByName(menuKelolaAnggota);
    } // setupUi

    void retranslateUi(QDialog *menuKelolaAnggota)
    {
        menuKelolaAnggota->setWindowTitle(QCoreApplication::translate("menuKelolaAnggota", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("menuKelolaAnggota", "Kelola Data Anggota", nullptr));
        pushButton->setText(QCoreApplication::translate("menuKelolaAnggota", "1. Tambah Data", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menuKelolaAnggota", "2. Ubah Data", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menuKelolaAnggota", "3. Hapus Data", nullptr));
        pushButton_4->setText(QCoreApplication::translate("menuKelolaAnggota", "Kembali", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuKelolaAnggota: public Ui_menuKelolaAnggota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUKELOLAANGGOTA_H
