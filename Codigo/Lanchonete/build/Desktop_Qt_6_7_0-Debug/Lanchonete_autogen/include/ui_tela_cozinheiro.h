/********************************************************************************
** Form generated from reading UI file 'tela_cozinheiro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_COZINHEIRO_H
#define UI_TELA_COZINHEIRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_cozinheiro
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *tela_cozinheiro)
    {
        if (tela_cozinheiro->objectName().isEmpty())
            tela_cozinheiro->setObjectName("tela_cozinheiro");
        tela_cozinheiro->resize(821, 571);
        lineEdit = new QLineEdit(tela_cozinheiro);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(310, 70, 431, 41));
        pushButton = new QPushButton(tela_cozinheiro);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 260, 271, 121));

        retranslateUi(tela_cozinheiro);

        QMetaObject::connectSlotsByName(tela_cozinheiro);
    } // setupUi

    void retranslateUi(QWidget *tela_cozinheiro)
    {
        tela_cozinheiro->setWindowTitle(QCoreApplication::translate("tela_cozinheiro", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("tela_cozinheiro", "asds", nullptr));
        pushButton->setText(QCoreApplication::translate("tela_cozinheiro", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_cozinheiro: public Ui_tela_cozinheiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_COZINHEIRO_H
