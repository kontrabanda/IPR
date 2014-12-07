#ifndef HISTORIAEGAZMINOW_H
#define HISTORIAEGAZMINOW_H

#include <QWidget>

namespace Ui {
class HistoriaEgazminow;
}

class HistoriaEgazminow : public QWidget
{
    Q_OBJECT

public:
    explicit HistoriaEgazminow(QWidget *parent = 0);
    ~HistoriaEgazminow();

private:
    Ui::HistoriaEgazminow *ui;
};

#endif // HISTORIAEGAZMINOW_H
