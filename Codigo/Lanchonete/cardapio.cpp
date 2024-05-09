#include "cardapio.h"
#include "ui_cardapio.h"

Cardapio::Cardapio(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cardapio)
{
    ui->setupUi(this);
}

Cardapio::~Cardapio()
{
    delete ui;
}
