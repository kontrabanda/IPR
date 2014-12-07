#include "certyfikat.h"
#include "ui_certyfikat.h"

Certyfikat::Certyfikat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Certyfikat)
{
    ui->setupUi(this);
}

Certyfikat::~Certyfikat()
{
    delete ui;
}
