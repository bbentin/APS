#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>

#include "tela_atendente.h"
#include "tela_cozinheiro.h"
#include "tela_gerente.h"
#include "cardapio.h"
#include "pedidos.h"
#include "estoque.h"
#include "pedidos_cozinheiro.h"
#include "funcionarios.h"
#include "clientes.h"


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


private slots:

    void on_acessBtn_clicked();

private:
    Ui::MainWindow *ui;
    Clientes telaG;
    tela_cozinheiro telaC;
    Tela_Atendente telaA;
};
#endif // MAINWINDOW_H
