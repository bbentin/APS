#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

#include <QWidget>

namespace Ui {
class Funcionarios;
}

class Funcionarios : public QWidget
{
    Q_OBJECT

public:
    explicit Funcionarios(QWidget *parent = nullptr);
    ~Funcionarios();

private:
    Ui::Funcionarios *ui;
};

#endif // FUNCIONARIOS_H
