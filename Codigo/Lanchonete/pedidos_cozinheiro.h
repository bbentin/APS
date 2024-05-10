#ifndef PEDIDOS_COZINHEIRO_H
#define PEDIDOS_COZINHEIRO_H

#include <QWidget>

namespace Ui {
class Pedidos_Cozinheiro;
}

class Pedidos_Cozinheiro : public QWidget
{
    Q_OBJECT

public:
    explicit Pedidos_Cozinheiro(QWidget *parent = nullptr);
    ~Pedidos_Cozinheiro();

private:
    Ui::Pedidos_Cozinheiro *ui;
};

#endif // PEDIDOS_COZINHEIRO_H
