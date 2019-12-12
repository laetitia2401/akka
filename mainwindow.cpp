#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogparametres.h"
#include<QDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionPararemetres_triggered()
{
    QDialog *dialogparametres=new DialogParametres();
    dialogparametres->show();
}
