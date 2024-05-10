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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Estoque
{
public:
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QFrame *line_2;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Estoque)
    {
        if (Estoque->objectName().isEmpty())
            Estoque->setObjectName("Estoque");
        Estoque->resize(632, 666);
        label = new QLabel(Estoque);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 171, 17));
        listView = new QListView(Estoque);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 40, 256, 192));
        pushButton = new QPushButton(Estoque);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 240, 201, 51));
        label_2 = new QLabel(Estoque);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 420, 151, 17));
        lineEdit = new QLineEdit(Estoque);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 450, 151, 31));
        pushButton_2 = new QPushButton(Estoque);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 490, 151, 51));
        pushButton_4 = new QPushButton(Estoque);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(50, 300, 201, 51));
        pushButton_3 = new QPushButton(Estoque);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 550, 151, 51));
        line = new QFrame(Estoque);
        line->setObjectName("line");
        line->setGeometry(QRect(320, 0, 20, 671));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_3 = new QLabel(Estoque);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 40, 221, 21));
        label_4 = new QLabel(Estoque);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(380, 90, 54, 17));
        lineEdit_2 = new QLineEdit(Estoque);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(430, 90, 151, 25));
        label_5 = new QLabel(Estoque);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 130, 54, 17));
        lineEdit_3 = new QLineEdit(Estoque);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(430, 130, 151, 25));
        label_6 = new QLabel(Estoque);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 180, 101, 17));
        radioButton = new QRadioButton(Estoque);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(470, 180, 96, 23));
        radioButton_2 = new QRadioButton(Estoque);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(530, 180, 96, 23));
        pushButton_5 = new QPushButton(Estoque);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(370, 230, 201, 51));
        pushButton_6 = new QPushButton(Estoque);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(370, 290, 201, 51));
        line_2 = new QFrame(Estoque);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(330, 370, 311, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_7 = new QPushButton(Estoque);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(390, 470, 171, 91));

        retranslateUi(Estoque);

        QMetaObject::connectSlotsByName(Estoque);
    } // setupUi

    void retranslateUi(QWidget *Estoque)
    {
        Estoque->setWindowTitle(QCoreApplication::translate("Estoque", "Form", nullptr));
        label->setText(QCoreApplication::translate("Estoque", "Itens do estoque e quantidade", nullptr));
        pushButton->setText(QCoreApplication::translate("Estoque", "Selecionar", nullptr));
        label_2->setText(QCoreApplication::translate("Estoque", "Quantidade a ser alterada", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Estoque", "Adicionar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Estoque", "Atualizar tabela", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Estoque", "Remover", nullptr));
        label_3->setText(QCoreApplication::translate("Estoque", "Item a ser cadastrado", nullptr));
        label_4->setText(QCoreApplication::translate("Estoque", "Nome:", nullptr));
        label_5->setText(QCoreApplication::translate("Estoque", "Pre\303\247o:", nullptr));
        label_6->setText(QCoreApplication::translate("Estoque", "Comercializ\303\241vel:", nullptr));
        radioButton->setText(QCoreApplication::translate("Estoque", "Sim", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Estoque", "N\303\243o", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Estoque", "Cadastrar", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Estoque", "Limpar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Estoque", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Estoque: public Ui_Estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
