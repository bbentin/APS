/********************************************************************************
** Form generated from reading UI file 'cardapio.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDAPIO_H
#define UI_CARDAPIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cardapio
{
public:

    void setupUi(QWidget *Cardapio)
    {
        if (Cardapio->objectName().isEmpty())
            Cardapio->setObjectName("Cardapio");
        Cardapio->resize(400, 300);

        retranslateUi(Cardapio);

        QMetaObject::connectSlotsByName(Cardapio);
    } // setupUi

    void retranslateUi(QWidget *Cardapio)
    {
        Cardapio->setWindowTitle(QCoreApplication::translate("Cardapio", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cardapio: public Ui_Cardapio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDAPIO_H
