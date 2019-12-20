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
private slots:

    //void on_cboCouleurs_currentIndexChanged(int index);

    void on_rbPolices_checked();

    //void on_actionEnrgistrer_Param_tres_triggered();

    //void on_actionA_propos_triggered();

    void on_rbArial_clicked();

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
