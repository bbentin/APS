#ifndef TELA_ATENDENTE_H
#define TELA_ATENDENTE_H

#include <QWidget>

namespace Ui {
class Tela_Atendente;
}

class Tela_Atendente : public QWidget
{
    Q_OBJECT

public:
    explicit Tela_Atendente(QWidget *parent = nullptr);
    ~Tela_Atendente();

private slots:
    void on_sairBtn_clicked();

    void on_fecharPedidoBtn_clicked();

private:
    Ui::Tela_Atendente *ui;
};

#endif // TELA_ATENDENTE_H
