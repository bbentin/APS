#include "tela_gerente.h"
#include "ui_tela_gerente.h"
#include "cardapio.h"
#include "estoque.h"
tela_gerente::tela_gerente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tela_gerente)
{
    ui->setupUi(this);
}

tela_gerente::~tela_gerente()
{
    delete ui;
}
