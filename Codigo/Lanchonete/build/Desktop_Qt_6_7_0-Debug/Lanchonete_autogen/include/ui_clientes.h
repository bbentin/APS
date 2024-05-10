/********************************************************************************
** Form generated from reading UI file 'clientes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTES_H
#define UI_CLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clientes
{
public:
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Clientes)
    {
        if (Clientes->objectName().isEmpty())
            Clientes->setObjectName("Clientes");
        Clientes->resize(570, 540);
        label = new QLabel(Clientes);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 54, 17));
        listView = new QListView(Clientes);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 50, 261, 381));
        pushButton = new QPushButton(Clientes);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 440, 261, 71));
        line = new QFrame(Clientes);
        line->setObjectName("line");
        line->setGeometry(QRect(300, 0, 20, 561));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(Clientes);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 30, 131, 17));
        label_3 = new QLabel(Clientes);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 60, 54, 17));
        lineEdit = new QLineEdit(Clientes);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(380, 60, 113, 25));
        label_4 = new QLabel(Clientes);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 110, 54, 17));
        lineEdit_2 = new QLineEdit(Clientes);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(380, 110, 113, 25));
        label_5 = new QLabel(Clientes);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(330, 150, 54, 17));
        lineEdit_3 = new QLineEdit(Clientes);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(380, 150, 113, 25));
        pushButton_2 = new QPushButton(Clientes);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 210, 101, 25));
        line_2 = new QFrame(Clientes);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(307, 300, 271, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_3 = new QPushButton(Clientes);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 360, 161, 101));

        retranslateUi(Clientes);

        QMetaObject::connectSlotsByName(Clientes);
    } // setupUi

    void retranslateUi(QWidget *Clientes)
    {
        Clientes->setWindowTitle(QCoreApplication::translate("Clientes", "Form", nullptr));
        label->setText(QCoreApplication::translate("Clientes", "Clientes", nullptr));
        pushButton->setText(QCoreApplication::translate("Clientes", "Atualizar", nullptr));
        label_2->setText(QCoreApplication::translate("Clientes", "Cadastrar novo cliente", nullptr));
        label_3->setText(QCoreApplication::translate("Clientes", "Nome:", nullptr));
        label_4->setText(QCoreApplication::translate("Clientes", "E-mail:", nullptr));
        label_5->setText(QCoreApplication::translate("Clientes", "Telefone:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clientes", "Cadastrar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Clientes", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clientes: public Ui_Clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTES_H
