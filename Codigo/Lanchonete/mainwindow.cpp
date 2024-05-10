#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),telaC(this),telaG(this),telaA(this)
{
    ui->setupUi(this);
    telaC.hide(); telaA.hide(); telaG.show(); ui->accessWidget->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_acessBtn_clicked()
{
    int input = ui->userEdit->text().toInt();

    switch(input){
    case 1:
        ui->accessWidget->hide();
        telaG.show();
        break;
    case 2:
        ui->accessWidget->hide();

        telaA.show();
        break;
    case 3:
        ui->accessWidget->hide();
        telaC.show();
        break;
    default:
        break;
    }
}
