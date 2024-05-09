#ifndef TELA_GERENTE_H
#define TELA_GERENTE_H

#include <QWidget>

namespace Ui {
class tela_gerente;
}

class tela_gerente : public QWidget
{
    Q_OBJECT

public:
    explicit tela_gerente(QWidget *parent = nullptr);
    ~tela_gerente();

private:
    Ui::tela_gerente *ui;
};

#endif // TELA_GERENTE_H
