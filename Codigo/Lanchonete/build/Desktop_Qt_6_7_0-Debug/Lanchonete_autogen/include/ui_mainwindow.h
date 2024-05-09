/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *accessWidget;
    QLineEdit *userEdit;
    QLineEdit *psswdEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *acessBtn;
    QMenuBar *menubar;
    QMenu *menuSistema;
    QMenu *menuEdit;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(798, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        accessWidget = new QWidget(centralwidget);
        accessWidget->setObjectName("accessWidget");
        accessWidget->setEnabled(true);
        accessWidget->setGeometry(QRect(240, 190, 321, 161));
        userEdit = new QLineEdit(accessWidget);
        userEdit->setObjectName("userEdit");
        userEdit->setGeometry(QRect(142, 30, 141, 25));
        psswdEdit = new QLineEdit(accessWidget);
        psswdEdit->setObjectName("psswdEdit");
        psswdEdit->setGeometry(QRect(142, 80, 141, 25));
        label = new QLabel(accessWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 54, 17));
        label_2 = new QLabel(accessWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 39, 17));
        acessBtn = new QPushButton(accessWidget);
        acessBtn->setObjectName("acessBtn");
        acessBtn->setGeometry(QRect(180, 120, 80, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 798, 22));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName("menuSistema");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSistema->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usu\303\241rio:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Senha:", nullptr));
        acessBtn->setText(QCoreApplication::translate("MainWindow", "Acessar", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
