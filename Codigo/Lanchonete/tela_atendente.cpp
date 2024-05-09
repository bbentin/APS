#include "tela_atendente.h"
#include "ui_tela_atendente.h"
#include "cardapio.h"

Tela_Atendente::Tela_Atendente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Tela_Atendente)
{
    ui->setupUi(this);
}

Tela_Atendente::~Tela_Atendente()
{
    delete ui;
}

void Tela_Atendente::on_sairBtn_clicked(){

    hide();
}


void Tela_Atendente::on_fecharPedidoBtn_clicked()
{
    ui->conferirPedidoBtn->close();
}

