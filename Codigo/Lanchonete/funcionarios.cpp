#include "funcionarios.h"
#include "ui_funcionarios.h"

Funcionarios::Funcionarios(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Funcionarios)
{
    ui->setupUi(this);
}

Funcionarios::~Funcionarios()
{
    delete ui;
}
