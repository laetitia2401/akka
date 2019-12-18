#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogparametres.h"
#include "releve.h"
#include "relevedb.h"
#include "meteoapi.h"
#include <QNetworkRequest>
#include <QUrl>
#include <QDebug>
#include <QNetworkReply>
#include <iostream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QSqlDatabase>
#include <QDir>
#include <QSqlQueryModel>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // *** DATABASE ************************************************************ ** */

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

        //db.setDatabaseName(QDir::homePath() + "/meteo.db");
        db.setDatabaseName("/root/Documents/ProjetsQt/stationmeteo/station-meteo/meteo.db");

        bool ok = db.open();

        if(!ok){ qDebug() << "Err Cnx ! "; }else{

            qDebug() << " Cnx Ok ! ";
            QString a,b;

            // Simulation en attendant l'autre table meteo
            QString rel_dateHeure = "441";
            QString rel_unite = "551";

                Releve *p = new Releve(a,b);
                Relevedb *val = new Relevedb();

               // QVector<Releve*> vec = new QVector<Releve>;
                val->ajout(rel_dateHeure, rel_unite);

                // Notes : Servira pour le QChart
                //ui->LABELQCHART->setText(val->recup(*p));


        }
    db.close();

    // *** API ************************************************************ ** */

    // CHoix de la ville
    QString ville = "London";
    QString pays = "uk";

    QNetworkRequest request(QUrl("http://api.openweathermap.org/data/2.5/weather?q=" + ville + "," + pays + "&APPID=479d7b90515d806879c5cccbe21077ee"));
       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QNetworkAccessManager mgr;
        QNetworkReply * reply = mgr.get(request);

        while(!reply->isFinished())
        {
            qApp->processEvents();
        }

        QByteArray reponse = reply->readAll();

    // *** JSON ****************************************************** ** */

        QJsonDocument jsonReponse = QJsonDocument::fromJson(reponse);
        reply->deleteLater();

        QJsonObject jsonObject = jsonReponse.object();

        QString val = "main";

             QJsonObject objVal = jsonObject.value(val).toObject();

                double tempMAX = objVal.value("temp_max").toDouble();
                double tempMIN = objVal.value("temp_min").toDouble();

        //MeteoAPI *met = new MeteoAPI();

                    QString affTempMAX = QString::number(tempMAX);
                    QString affTempMIN = QString::number(tempMIN);

    // Affichage de la température
    ui->affichageTemp->setText(affTempMAX);
    ui->affVille->setText(ville);

    QString sDate = QDateTime::currentDateTime().toString("dddd dd MMMM yyyy hh::mm:ss:zzz");
    ui->affichageDateHeure->setText(sDate);


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

