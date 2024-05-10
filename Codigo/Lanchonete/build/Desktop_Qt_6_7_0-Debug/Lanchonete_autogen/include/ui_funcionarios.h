/********************************************************************************
** Form generated from reading UI file 'funcionarios.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCIONARIOS_H
#define UI_FUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Funcionarios
{
public:
    QFrame *line;
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Funcionarios)
    {
        if (Funcionarios->objectName().isEmpty())
            Funcionarios->setObjectName("Funcionarios");
        Funcionarios->resize(568, 568);
        line = new QFrame(Funcionarios);
        line->setObjectName("line");
        line->setGeometry(QRect(310, 0, 20, 451));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(Funcionarios);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 81, 17));
        listView = new QListView(Funcionarios);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 50, 256, 271));
        pushButton = new QPushButton(Funcionarios);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 350, 251, 81));
        label_2 = new QLabel(Funcionarios);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 20, 161, 17));
        lineEdit = new QLineEdit(Funcionarios);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(410, 60, 113, 25));
        label_3 = new QLabel(Funcionarios);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 60, 54, 16));
        lineEdit_2 = new QLineEdit(Funcionarios);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(410, 100, 113, 25));
        label_4 = new QLabel(Funcionarios);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 100, 54, 16));
        lineEdit_3 = new QLineEdit(Funcionarios);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(410, 140, 113, 25));
        label_5 = new QLabel(Funcionarios);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 140, 54, 16));
        lineEdit_4 = new QLineEdit(Funcionarios);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(410, 180, 113, 25));
        label_6 = new QLabel(Funcionarios);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(360, 180, 54, 16));
        lineEdit_5 = new QLineEdit(Funcionarios);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(410, 300, 113, 25));
        label_7 = new QLabel(Funcionarios);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(360, 300, 54, 16));
        label_8 = new QLabel(Funcionarios);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(360, 220, 54, 17));
        label_9 = new QLabel(Funcionarios);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(360, 260, 54, 17));
        comboBox = new QComboBox(Funcionarios);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(410, 220, 111, 25));
        comboBox_2 = new QComboBox(Funcionarios);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(410, 260, 111, 25));
        pushButton_2 = new QPushButton(Funcionarios);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 350, 171, 81));
        line_2 = new QFrame(Funcionarios);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(10, 440, 581, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_3 = new QPushButton(Funcionarios);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 480, 441, 61));

        retranslateUi(Funcionarios);

        QMetaObject::connectSlotsByName(Funcionarios);
    } // setupUi

    void retranslateUi(QWidget *Funcionarios)
    {
        Funcionarios->setWindowTitle(QCoreApplication::translate("Funcionarios", "Form", nullptr));
        label->setText(QCoreApplication::translate("Funcionarios", "Funcion\303\241rios", nullptr));
        pushButton->setText(QCoreApplication::translate("Funcionarios", "Encerrar", nullptr));
        label_2->setText(QCoreApplication::translate("Funcionarios", "Cadastrar novo funcion\303\241rio", nullptr));
        label_3->setText(QCoreApplication::translate("Funcionarios", "Nome:", nullptr));
        label_4->setText(QCoreApplication::translate("Funcionarios", "Telefone:", nullptr));
        label_5->setText(QCoreApplication::translate("Funcionarios", "E-mail:", nullptr));
        label_6->setText(QCoreApplication::translate("Funcionarios", "Sal\303\241rio:", nullptr));
        label_7->setText(QCoreApplication::translate("Funcionarios", "Senha:", nullptr));
        label_8->setText(QCoreApplication::translate("Funcionarios", "Idade:", nullptr));
        label_9->setText(QCoreApplication::translate("Funcionarios", "Cargo:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Funcionarios", "Cadastrar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Funcionarios", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Funcionarios: public Ui_Funcionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCIONARIOS_H
