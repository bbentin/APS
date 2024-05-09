#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>

#include "tela_atendente.h"
#include "tela_cozinheiro.h"
#include "tela_gerente.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void exibir();

private slots:

    void on_acessBtn_clicked();

private:
    Ui::MainWindow *ui;
    tela_gerente telaG;
    tela_cozinheiro telaC;
    Tela_Atendente telaA;
};
#endif // MAINWINDOW_H
