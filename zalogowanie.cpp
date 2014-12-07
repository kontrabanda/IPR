#include "zalogowanie.h"
#include "ui_zalogowanie.h"

Zalogowanie::Zalogowanie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Zalogowanie)
{
    ui->setupUi(this);
}

Zalogowanie::~Zalogowanie()
{
    delete ui;
}
