/********************************************************************************
** Form generated from reading UI file 'estoque.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTOQUE_H
#define UI_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Estoque
{
public:

    void setupUi(QWidget *Estoque)
    {
        if (Estoque->objectName().isEmpty())
            Estoque->setObjectName("Estoque");
        Estoque->resize(400, 300);

        retranslateUi(Estoque);

        QMetaObject::connectSlotsByName(Estoque);
    } // setupUi

    void retranslateUi(QWidget *Estoque)
    {
        Estoque->setWindowTitle(QCoreApplication::translate("Estoque", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Estoque: public Ui_Estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
