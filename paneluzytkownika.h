#ifndef PANELUZYTKOWNIKA_H
#define PANELUZYTKOWNIKA_H

#include <QWidget>

namespace Ui {
    class PanelUzytkownika;
}

class PanelUzytkownika : public QWidget
{
    Q_OBJECT

public:
    explicit PanelUzytkownika(QWidget *parent = 0);
    ~PanelUzytkownika();

private:
    Ui::PanelUzytkownika *ui;
};

#endif // PANELUZYTKOWNIKA_H
