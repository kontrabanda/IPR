#ifndef PRZEGLADANIENOTOATEK_H
#define PRZEGLADANIENOTOATEK_H

#include <QWidget>

namespace Ui {
class PrzegladanieNotoatek;
}

class PrzegladanieNotoatek : public QWidget
{
    Q_OBJECT

public:
    explicit PrzegladanieNotoatek(QWidget *parent = 0);
    ~PrzegladanieNotoatek();

private:
    Ui::PrzegladanieNotoatek *ui;
};

#endif // PRZEGLADANIENOTOATEK_H
