#ifndef TELA_COZINHEIRO_H
#define TELA_COZINHEIRO_H

#include <QWidget>

namespace Ui {
class tela_cozinheiro;
}

class tela_cozinheiro : public QWidget
{
    Q_OBJECT

public:
    explicit tela_cozinheiro(QWidget *parent = nullptr);
    ~tela_cozinheiro();

private:
    Ui::tela_cozinheiro *ui;
};

#endif // TELA_COZINHEIRO_H
