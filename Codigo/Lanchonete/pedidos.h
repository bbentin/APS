#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <QWidget>

namespace Ui {
class Pedidos;
}

class Pedidos : public QWidget
{
    Q_OBJECT

public:
    explicit Pedidos(QWidget *parent = nullptr);
    ~Pedidos();

private:
    Ui::Pedidos *ui;
};

#endif // PEDIDOS_H
