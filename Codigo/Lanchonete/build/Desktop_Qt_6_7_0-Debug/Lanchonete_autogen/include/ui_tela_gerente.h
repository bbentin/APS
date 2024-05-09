/********************************************************************************
** Form generated from reading UI file 'tela_gerente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_GERENTE_H
#define UI_TELA_GERENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_gerente
{
public:
    QTextEdit *textEdit;

    void setupUi(QWidget *tela_gerente)
    {
        if (tela_gerente->objectName().isEmpty())
            tela_gerente->setObjectName("tela_gerente");
        tela_gerente->resize(812, 523);
        textEdit = new QTextEdit(tela_gerente);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(220, 220, 371, 191));

        retranslateUi(tela_gerente);

        QMetaObject::connectSlotsByName(tela_gerente);
    } // setupUi

    void retranslateUi(QWidget *tela_gerente)
    {
        tela_gerente->setWindowTitle(QCoreApplication::translate("tela_gerente", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_gerente: public Ui_tela_gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_GERENTE_H
