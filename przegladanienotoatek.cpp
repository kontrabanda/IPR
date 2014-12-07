#include "przegladanienotoatek.h"
#include "ui_przegladanienotoatek.h"

PrzegladanieNotoatek::PrzegladanieNotoatek(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PrzegladanieNotoatek)
{
    ui->setupUi(this);
}

PrzegladanieNotoatek::~PrzegladanieNotoatek()
{
    delete ui;
}
