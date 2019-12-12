#ifndef DIALOGPARAMETRES_H
#define DIALOGPARAMETRES_H

#include <QDialog>

namespace Ui {
class DialogParametres;
}

class DialogParametres : public QDialog
{
    Q_OBJECT

public:
    explicit DialogParametres(QWidget *parent = 0);
    ~DialogParametres();

private:
    Ui::DialogParametres *ui;
};

#endif // DIALOGPARAMETRES_H
