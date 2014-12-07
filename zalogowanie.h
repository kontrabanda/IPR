#ifndef ZALOGOWANIE_H
#define ZALOGOWANIE_H

#include <QWidget>

namespace Ui {
class Zalogowanie;
}

class Zalogowanie : public QWidget
{
    Q_OBJECT

public:
    explicit Zalogowanie(QWidget *parent = 0);
    ~Zalogowanie();

private:
    Ui::Zalogowanie *ui;
};

#endif // ZALOGOWANIE_H
