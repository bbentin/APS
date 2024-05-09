/********************************************************************************
** Form generated from reading UI file 'tela_atendente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_ATENDENTE_H
#define UI_TELA_ATENDENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tela_Atendente
{
public:
    QPushButton *novoPedidoBtn;
    QPushButton *conferirPedidoBtn;
    QPushButton *fecharPedidoBtn;
    QPushButton *sairBtn;
    QPushButton *dadosClientesBtn;
    QRadioButton *radioButton;

    void setupUi(QWidget *Tela_Atendente)
    {
        if (Tela_Atendente->objectName().isEmpty())
            Tela_Atendente->setObjectName("Tela_Atendente");
        Tela_Atendente->resize(747, 549);
        novoPedidoBtn = new QPushButton(Tela_Atendente);
        novoPedidoBtn->setObjectName("novoPedidoBtn");
        novoPedidoBtn->setGeometry(QRect(10, 40, 221, 181));
        conferirPedidoBtn = new QPushButton(Tela_Atendente);
        conferirPedidoBtn->setObjectName("conferirPedidoBtn");
        conferirPedidoBtn->setGeometry(QRect(250, 40, 221, 181));
        fecharPedidoBtn = new QPushButton(Tela_Atendente);
        fecharPedidoBtn->setObjectName("fecharPedidoBtn");
        fecharPedidoBtn->setGeometry(QRect(70, 290, 221, 181));
        sairBtn = new QPushButton(Tela_Atendente);
        sairBtn->setObjectName("sairBtn");
        sairBtn->setGeometry(QRect(340, 300, 241, 171));
        sairBtn->setAutoDefault(true);
        dadosClientesBtn = new QPushButton(Tela_Atendente);
        dadosClientesBtn->setObjectName("dadosClientesBtn");
        dadosClientesBtn->setGeometry(QRect(510, 60, 201, 171));
        radioButton = new QRadioButton(Tela_Atendente);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(90, 250, 96, 23));

        retranslateUi(Tela_Atendente);

        QMetaObject::connectSlotsByName(Tela_Atendente);
    } // setupUi

    void retranslateUi(QWidget *Tela_Atendente)
    {
        Tela_Atendente->setWindowTitle(QCoreApplication::translate("Tela_Atendente", "Form", nullptr));
        novoPedidoBtn->setText(QCoreApplication::translate("Tela_Atendente", "Novo pedido", nullptr));
        conferirPedidoBtn->setText(QCoreApplication::translate("Tela_Atendente", "Conferir pedidos abertos", nullptr));
        fecharPedidoBtn->setText(QCoreApplication::translate("Tela_Atendente", "Encerrar pedido", nullptr));
        sairBtn->setText(QCoreApplication::translate("Tela_Atendente", "Sair", nullptr));
        dadosClientesBtn->setText(QCoreApplication::translate("Tela_Atendente", "Clientes", nullptr));
        radioButton->setText(QCoreApplication::translate("Tela_Atendente", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tela_Atendente: public Ui_Tela_Atendente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_ATENDENTE_H
