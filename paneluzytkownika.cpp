#include "paneluzytkownika.h"
#include "ui_paneluzytkownika.h"

PanelUzytkownika::PanelUzytkownika(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelUzytkownika)
{
    ui->setupUi(this);
}

PanelUzytkownika::~PanelUzytkownika()
{
    delete ui;
}
