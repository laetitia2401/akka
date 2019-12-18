#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);


    ~MainWindow();

private slots:
    void on_actionPararemetres_triggered();

    void on_BtnMeteo_clicked();

    void on_btnS_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
