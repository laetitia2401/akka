#ifndef DIALOGPARAMETRES_H
#define DIALOGPARAMETRES_H
#include <QDialog>
#include <QImage>

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
    QImage image;
};
int xtoi(long double x);
int ytoj(long double y);
long double itox(int i);
long double jtoy(int j);
bool validite(int i,int j);

#endif // DIALOGPARAMETRES_H
