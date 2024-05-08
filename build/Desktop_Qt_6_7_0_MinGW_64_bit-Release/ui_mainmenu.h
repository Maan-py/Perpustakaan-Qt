/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_anggota;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName("mainMenu");
        mainMenu->resize(585, 480);
        formLayout = new QFormLayout(mainMenu);
        formLayout->setObjectName("formLayout");
        groupBox = new QGroupBox(mainMenu);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_anggota = new QPushButton(groupBox);
        pushButton_anggota->setObjectName("pushButton_anggota");

        verticalLayout->addWidget(pushButton_anggota);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox);


        retranslateUi(mainMenu);

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QDialog *mainMenu)
    {
        mainMenu->setWindowTitle(QCoreApplication::translate("mainMenu", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mainMenu", " Menu Utama", nullptr));
        pushButton_anggota->setText(QCoreApplication::translate("mainMenu", "1.  Database Anggota", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainMenu", "2.  Database Buku", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainMenu", "3.  Database Status Buku", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
