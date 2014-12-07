#ifndef CERTYFIKAT_H
#define CERTYFIKAT_H

#include <QMainWindow>

namespace Ui {
class Certyfikat;
}

class Certyfikat : public QMainWindow
{
    Q_OBJECT

public:
    explicit Certyfikat(QWidget *parent = 0);
    ~Certyfikat();

private:
    Ui::Certyfikat *ui;
};

#endif // CERTYFIKAT_H
