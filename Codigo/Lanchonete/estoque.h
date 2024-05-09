#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <QWidget>

namespace Ui {
class Estoque;
}

class Estoque : public QWidget
{
    Q_OBJECT

public:
    explicit Estoque(QWidget *parent = nullptr);
    ~Estoque();

private:
    Ui::Estoque *ui;
};

#endif // ESTOQUE_H
