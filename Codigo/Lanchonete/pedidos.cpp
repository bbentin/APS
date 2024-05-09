#include "pedidos.h"
#include "ui_pedidos.h"

Pedidos::Pedidos(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Pedidos)
{
    ui->setupUi(this);
}

Pedidos::~Pedidos()
{
    delete ui;
}
