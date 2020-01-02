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

private slots:
    void on_rbPolices_checked();
    void on_buttonBox_accepted();
private:

    Ui::DialogParametres *ui;
};

#endif // DIALOGPARAMETRES_
