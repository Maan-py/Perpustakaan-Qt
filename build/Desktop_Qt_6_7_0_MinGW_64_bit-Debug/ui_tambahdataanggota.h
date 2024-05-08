/********************************************************************************
** Form generated from reading UI file 'tambahdataanggota.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAMBAHDATAANGGOTA_H
#define UI_TAMBAHDATAANGGOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tambahdataanggota
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_kelolaAnggota;

    void setupUi(QDialog *tambahdataanggota)
    {
        if (tambahdataanggota->objectName().isEmpty())
            tambahdataanggota->setObjectName("tambahdataanggota");
        tambahdataanggota->resize(692, 481);
        verticalLayout = new QVBoxLayout(tambahdataanggota);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(tambahdataanggota);
        groupBox->setObjectName("groupBox");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 81, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 81, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 160, 81, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 200, 81, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 250, 81, 41));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(60, 300, 151, 41));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 80, 113, 28));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 120, 113, 28));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(210, 260, 113, 28));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(210, 210, 113, 28));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(210, 170, 113, 28));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(210, 310, 113, 28));
        pushButton_kelolaAnggota = new QPushButton(groupBox);
        pushButton_kelolaAnggota->setObjectName("pushButton_kelolaAnggota");
        pushButton_kelolaAnggota->setGeometry(QRect(60, 380, 83, 29));

        verticalLayout->addWidget(groupBox);


        retranslateUi(tambahdataanggota);

        QMetaObject::connectSlotsByName(tambahdataanggota);
    } // setupUi

    void retranslateUi(QDialog *tambahdataanggota)
    {
        tambahdataanggota->setWindowTitle(QCoreApplication::translate("tambahdataanggota", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tambahdataanggota", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("tambahdataanggota", "ID :", nullptr));
        label_2->setText(QCoreApplication::translate("tambahdataanggota", "Nama :", nullptr));
        label_3->setText(QCoreApplication::translate("tambahdataanggota", "Alamat :", nullptr));
        label_4->setText(QCoreApplication::translate("tambahdataanggota", "No. Telp : ", nullptr));
        label_5->setText(QCoreApplication::translate("tambahdataanggota", "No. Telp : ", nullptr));
        label_11->setText(QCoreApplication::translate("tambahdataanggota", "Status Keanggotaan : ", nullptr));
        pushButton_kelolaAnggota->setText(QCoreApplication::translate("tambahdataanggota", "Kembali", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tambahdataanggota: public Ui_tambahdataanggota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAMBAHDATAANGGOTA_H
