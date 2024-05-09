#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <QWidget>

namespace Ui {
class Cardapio;
}

class Cardapio : public QWidget
{
    Q_OBJECT

public:
    explicit Cardapio(QWidget *parent = nullptr);
    ~Cardapio();

private:
    Ui::Cardapio *ui;
};

#endif // CARDAPIO_H
