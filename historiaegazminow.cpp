#include "historiaegazminow.h"
#include "ui_historiaegazminow.h"

HistoriaEgazminow::HistoriaEgazminow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HistoriaEgazminow)
{
    ui->setupUi(this);
}

HistoriaEgazminow::~HistoriaEgazminow()
{
    delete ui;
}
