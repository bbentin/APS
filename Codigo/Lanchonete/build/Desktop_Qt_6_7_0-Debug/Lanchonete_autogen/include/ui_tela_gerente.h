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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tela_gerente
{
public:
    QListView *listView;
    QLabel *label;
    QListView *listView_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *tela_gerente)
    {
        if (tela_gerente->objectName().isEmpty())
            tela_gerente->setObjectName("tela_gerente");
        tela_gerente->resize(812, 523);
        listView = new QListView(tela_gerente);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 50, 261, 331));
        label = new QLabel(tela_gerente);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 161, 17));
        listView_2 = new QListView(tela_gerente);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(300, 50, 261, 331));
        label_2 = new QLabel(tela_gerente);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 30, 101, 17));
        pushButton = new QPushButton(tela_gerente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 300, 161, 81));
        pushButton_2 = new QPushButton(tela_gerente);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(610, 400, 161, 81));
        pushButton_3 = new QPushButton(tela_gerente);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 400, 161, 81));
        pushButton_4 = new QPushButton(tela_gerente);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 400, 161, 81));
        lineEdit = new QLineEdit(tela_gerente);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(610, 180, 151, 25));
        comboBox = new QComboBox(tela_gerente);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(610, 110, 151, 25));
        label_3 = new QLabel(tela_gerente);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(610, 90, 141, 17));
        label_4 = new QLabel(tela_gerente);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(610, 160, 141, 17));

        retranslateUi(tela_gerente);

        QMetaObject::connectSlotsByName(tela_gerente);
    } // setupUi

    void retranslateUi(QWidget *tela_gerente)
    {
        tela_gerente->setWindowTitle(QCoreApplication::translate("tela_gerente", "Form", nullptr));
        label->setText(QCoreApplication::translate("tela_gerente", "Itens dispon\303\255veis.", nullptr));
        label_2->setText(QCoreApplication::translate("tela_gerente", "Pedido atual", nullptr));
        pushButton->setText(QCoreApplication::translate("tela_gerente", "Confirmar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tela_gerente", "Cancelar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("tela_gerente", "Adicionar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("tela_gerente", "Remover", nullptr));
        label_3->setText(QCoreApplication::translate("tela_gerente", "Clientes cadastrados", nullptr));
        label_4->setText(QCoreApplication::translate("tela_gerente", "Nome para retirada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_gerente: public Ui_tela_gerente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_GERENTE_H
