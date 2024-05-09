/********************************************************************************
** Form generated from reading UI file 'pedidos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDIDOS_H
#define UI_PEDIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pedidos
{
public:

    void setupUi(QWidget *Pedidos)
    {
        if (Pedidos->objectName().isEmpty())
            Pedidos->setObjectName("Pedidos");
        Pedidos->resize(400, 300);

        retranslateUi(Pedidos);

        QMetaObject::connectSlotsByName(Pedidos);
    } // setupUi

    void retranslateUi(QWidget *Pedidos)
    {
        Pedidos->setWindowTitle(QCoreApplication::translate("Pedidos", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pedidos: public Ui_Pedidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDIDOS_H
