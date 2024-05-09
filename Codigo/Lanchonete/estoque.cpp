#include "estoque.h"
#include "ui_estoque.h"

Estoque::Estoque(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Estoque)
{
    ui->setupUi(this);
}

Estoque::~Estoque()
{
    delete ui;
}
