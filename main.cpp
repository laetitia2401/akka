#include "mainwindow.h"
#include <QApplication>
#include <iostream>

#include <QApplication>
#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QSplineSeries>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //![1]
    QSplineSeries *series = new QSplineSeries();
    series->setName("spline");
    //![1]

    //![2]
    *series << QPointF(1, 22.8) << QPointF(2, 23.1) << QPointF(3,21.9) << QPointF(4,21.5) << QPointF(5, 22.2)
               << QPointF(6, 19.2)<< QPointF(7, 20.2)<< QPointF(8, 22.2)<< QPointF(9, 22.0)<< QPointF(10, 22.6);
    //![2]

    //![3]
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Relevé des 12 derniere heures");
    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0, 30);
    //![3]

    //![4]
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    //![4]

    //![5]
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(400, 300);
    window.show();
    //![5]
    MainWindow w;
    w.show();

    return a.exec();
}






