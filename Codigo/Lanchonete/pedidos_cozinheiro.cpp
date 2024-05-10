#include "pedidos_cozinheiro.h"
#include "ui_pedidos_cozinheiro.h"

Pedidos_Cozinheiro::Pedidos_Cozinheiro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Pedidos_Cozinheiro)
{
    ui->setupUi(this);
}

Pedidos_Cozinheiro::~Pedidos_Cozinheiro()
{
    delete ui;
}
