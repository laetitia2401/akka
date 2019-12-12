#include "dialogparametres.h"
#include "ui_dialogparametres.h"

DialogParametres::DialogParametres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogParametres)
{
    ui->setupUi(this);
}

DialogParametres::~DialogParametres()
{
    delete ui;
}
