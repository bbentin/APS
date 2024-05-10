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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pedidos
{
public:
    QListView *listView;
    QLabel *label;
    QPushButton *pushButton_2;
    QListView *listView_2;
    QListView *listView_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Pedidos)
    {
        if (Pedidos->objectName().isEmpty())
            Pedidos->setObjectName("Pedidos");
        Pedidos->resize(856, 620);
        listView = new QListView(Pedidos);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 50, 201, 401));
        label = new QLabel(Pedidos);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 171, 17));
        pushButton_2 = new QPushButton(Pedidos);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 490, 151, 81));
        listView_2 = new QListView(Pedidos);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(240, 50, 201, 401));
        listView_3 = new QListView(Pedidos);
        listView_3->setObjectName("listView_3");
        listView_3->setGeometry(QRect(460, 50, 201, 401));
        label_2 = new QLabel(Pedidos);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 30, 101, 17));
        label_3 = new QLabel(Pedidos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 30, 161, 17));
        pushButton_3 = new QPushButton(Pedidos);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 490, 151, 81));
        pushButton_4 = new QPushButton(Pedidos);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(270, 490, 151, 81));
        pushButton_5 = new QPushButton(Pedidos);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(680, 60, 151, 81));
        pushButton_6 = new QPushButton(Pedidos);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(680, 360, 151, 81));
        pushButton_7 = new QPushButton(Pedidos);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(680, 160, 151, 81));
        pushButton_8 = new QPushButton(Pedidos);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(680, 260, 151, 81));

        retranslateUi(Pedidos);

        QMetaObject::connectSlotsByName(Pedidos);
    } // setupUi

    void retranslateUi(QWidget *Pedidos)
    {
        Pedidos->setWindowTitle(QCoreApplication::translate("Pedidos", "Form", nullptr));
        label->setText(QCoreApplication::translate("Pedidos", "Pedidos em andamento", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Pedidos", "Remover", nullptr));
        label_2->setText(QCoreApplication::translate("Pedidos", "Itens para adi\303\247\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("Pedidos", "Itens no pedido selecionado", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Pedidos", "Selecionar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Pedidos", "Adicionar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Pedidos", "Confirmar", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Pedidos", "Cancelar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Pedidos", "Terminar", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Pedidos", "Encerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pedidos: public Ui_Pedidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDIDOS_H
