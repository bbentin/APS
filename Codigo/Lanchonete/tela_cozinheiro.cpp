#include "tela_cozinheiro.h"
#include "ui_tela_cozinheiro.h"

tela_cozinheiro::tela_cozinheiro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tela_cozinheiro)
{
    ui->setupUi(this);
}

tela_cozinheiro::~tela_cozinheiro()
{
    delete ui;
}
