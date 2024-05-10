/********************************************************************************
** Form generated from reading UI file 'pedidos_cozinheiro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDIDOS_COZINHEIRO_H
#define UI_PEDIDOS_COZINHEIRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pedidos_Cozinheiro
{
public:
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QListView *listView_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Pedidos_Cozinheiro)
    {
        if (Pedidos_Cozinheiro->objectName().isEmpty())
            Pedidos_Cozinheiro->setObjectName("Pedidos_Cozinheiro");
        Pedidos_Cozinheiro->resize(638, 688);
        label = new QLabel(Pedidos_Cozinheiro);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 101, 17));
        listView = new QListView(Pedidos_Cozinheiro);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(30, 70, 256, 441));
        pushButton = new QPushButton(Pedidos_Cozinheiro);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 530, 251, 51));
        pushButton_2 = new QPushButton(Pedidos_Cozinheiro);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 600, 251, 51));
        label_2 = new QLabel(Pedidos_Cozinheiro);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 50, 91, 17));
        listView_2 = new QListView(Pedidos_Cozinheiro);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(340, 70, 256, 441));
        pushButton_3 = new QPushButton(Pedidos_Cozinheiro);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 540, 181, 91));

        retranslateUi(Pedidos_Cozinheiro);

        QMetaObject::connectSlotsByName(Pedidos_Cozinheiro);
    } // setupUi

    void retranslateUi(QWidget *Pedidos_Cozinheiro)
    {
        Pedidos_Cozinheiro->setWindowTitle(QCoreApplication::translate("Pedidos_Cozinheiro", "Form", nullptr));
        label->setText(QCoreApplication::translate("Pedidos_Cozinheiro", "Pedidos na fila", nullptr));
        pushButton->setText(QCoreApplication::translate("Pedidos_Cozinheiro", "Selecionar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Pedidos_Cozinheiro", "Item pronto", nullptr));
        label_2->setText(QCoreApplication::translate("Pedidos_Cozinheiro", "Pedidos prontos", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Pedidos_Cozinheiro", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pedidos_Cozinheiro: public Ui_Pedidos_Cozinheiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDIDOS_COZINHEIRO_H
