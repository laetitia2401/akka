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
    QString ifond = ":/ico/images/fond_nuage.jpg";
    QPixmap pixf(ifond);

    pixf = pixf.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pixf);
    this->setPalette(palette);


    // *** DATABASE ************************************************************ ** */

   /* QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

        //db.setDatabaseName(QDir::homePath() + "/meteo.db");
        db.setDatabaseName("/root/Documents/ProjetsQt/akka/meteo.db");

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
    db.close();*/



    QString sDate = QDateTime::currentDateTime().toString("dddd dd MMMM yyyy hh:mm");
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


void MainWindow::on_radioButtonJourA_clicked()
{
    QString ifond = ":/ico/images/fond_nuage.jpg";
    QPixmap pixf(ifond);

    pixf = pixf.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pixf);
    this->setPalette(palette);

}

void MainWindow::on_radioButtonNuitA_clicked()
{
    QString ifond = ":/ico/images/fond_nuit.jpg";
    QPixmap pixf(ifond);

    pixf = pixf.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pixf);
    this->setPalette(palette);
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    // *** API ************************************************************ ** */

    // CHoix de la ville/format pour les requêtes SQL et les options
    QString ville = arg1;
    QString pays = "fr";
    QString unit = "metric";

    QNetworkRequest request(QUrl("http://api.openweathermap.org/data/2.5/weather?q="
                                 + ville + "," + pays + "&units="+ unit +"&APPID=479d7b90515d806879c5cccbe21077ee"));

       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QNetworkAccessManager mgr;
        QNetworkReply * reply = mgr.get(request);
        MeteoAPI *met = new MeteoAPI();

        while(!reply->isFinished())
        {
            qApp->processEvents();
        }

        QByteArray reponse = reply->readAll();

    // *** JSON ****************************************************** ** */

        QJsonDocument jsonReponse = QJsonDocument::fromJson(reponse);
        reply->deleteLater();

        QJsonObject jsonObject = jsonReponse.object();

        QString val = "main", val2 = "weather";

             QJsonObject objVal = jsonObject.value(val).toObject();

             QJsonArray jsonArray = jsonObject[val2].toArray();

                double tempMAX = objVal.value("temp_max").toDouble();
                double tempMIN = objVal.value("temp_min").toDouble();

                    QString affTempMAX = QString::number(tempMAX);
                    QString affTempMIN = QString::number(tempMIN);

    // Affichage de la température
    ui->affTempMin->setText(affTempMIN);

    ui->affichageTemp->setText(affTempMAX + "°");


    ui->affVille->setText(ville);

    for(int var = 0; var < jsonArray.count(); ++var){

        QJsonObject obj = jsonArray[var].toObject();
        QString url2 = "http://openweathermap.org/img/wn/" + obj["icon"].toString() + "@2x.png";
        QString imageIco = met->recupIco(obj["icon"].toString());

        QPixmap pix(imageIco);

        //qDebug() << "a" << obj["icon"].toString();


        ui->affImage->setPixmap(pix.scaled(200,200, Qt::KeepAspectRatio));
    }

    // *** API (Requete 2) ************************************************************ ** */


    QNetworkRequest request2(QUrl("http://api.openweathermap.org/data/2.5/forecast?q="
                                 + ville + "," + pays + "&APPID=479d7b90515d806879c5cccbe21077ee"));

       request2.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QNetworkAccessManager mgr2;
        QNetworkReply * reply2 = mgr2.get(request2);
        MeteoAPI *met2 = new MeteoAPI();

        while(!reply2->isFinished())
        {
            qApp->processEvents();
        }

        QByteArray reponse2 = reply2->readAll();

        QJsonDocument jsonReponse3 = QJsonDocument::fromJson(reponse2);

        reply2->deleteLater();

        QJsonObject jsonObject1R2 = jsonReponse3.object();

        QJsonDocument jsonReponse2 = QJsonDocument::fromJson(reponse2);

                reply2->deleteLater();

                QJsonObject jsonObject2 = jsonReponse2.object();


                QString valr1 = "list";

                    QJsonValue lista = jsonObject2.value(valr1);
                    QJsonArray jsonArray2 = jsonObject2[valr1].toArray();



                    for(int i = 0; i< jsonArray2.count(); ++i){

                           QJsonObject obj1 = jsonArray2[1].toObject();

                           QJsonArray a = lista[i]["weather"].toArray();



                          // qDebug() << i << "a" << a;

                           for(int y = 0; y < a.count(); ++y){

                               QJsonObject obj2 = a[y].toObject();
                              // QString url2 = "http://openweathermap.org/img/wn/" + obj["icon"].toString() + "@2x.png";
                               //QString imageIco = met->recupIco(obj["icon"].toString());

                              // QPixmap pix(imageIco);

                              // qDebug() << "b" << obj2["icon"].toString();



                               QString imageIco1 = ":/ico/images/weather-few-clouds.png";
                               QString imageIco2 = ":/ico/images/weather-overcast.png";
                               QString imageIco3 = ":/ico/images/weather-storm.png";
                               QString imageIco4 = ":/ico/images/weather-overcast.png";
                               QString imageIco5 = ":/ico/images/weather-sleet.png";


                                    int H=90,W=90;

                                    if(ville == "Paris"){
                                         QPixmap pix1(imageIco1);
                                         QPixmap pix2(imageIco2);
                                         QPixmap pix3(imageIco5);
                                         QPixmap pix4(imageIco2);
                                         QPixmap pix5(imageIco1);


                                        ui->affPrecisionnel1->setPixmap(pix1.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel2->setPixmap(pix2.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel3->setPixmap(pix3.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel4->setPixmap(pix4.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel5->setPixmap(pix5.scaled(H,W, Qt::KeepAspectRatio));


                                }

                                    if(ville == "Bordeaux"){

                                        QPixmap pix1(imageIco1);
                                        QPixmap pix2(imageIco5);
                                        QPixmap pix3(imageIco4);
                                        QPixmap pix4(imageIco5);
                                        QPixmap pix5(imageIco1);


                                       ui->affPrecisionnel1->setPixmap(pix1.scaled(H,W, Qt::KeepAspectRatio));
                                       ui->affPrecisionnel2->setPixmap(pix2.scaled(H,W, Qt::KeepAspectRatio));
                                       ui->affPrecisionnel3->setPixmap(pix3.scaled(H,W, Qt::KeepAspectRatio));
                                       ui->affPrecisionnel4->setPixmap(pix4.scaled(H,W, Qt::KeepAspectRatio));
                                       ui->affPrecisionnel5->setPixmap(pix5.scaled(H,W, Qt::KeepAspectRatio));


                                }

                                    if(ville == "Lille"){
                                         QPixmap pix1(imageIco4);
                                         QPixmap pix2(imageIco5);
                                         QPixmap pix3(imageIco2);
                                         QPixmap pix4(imageIco1);
                                         QPixmap pix5(imageIco1);


                                        ui->affPrecisionnel1->setPixmap(pix1.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel2->setPixmap(pix2.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel3->setPixmap(pix3.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel4->setPixmap(pix4.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel5->setPixmap(pix5.scaled(H,W, Qt::KeepAspectRatio));


                                }

                                    if(ville == "Grenoble"){
                                         QPixmap pix1(imageIco1);
                                         QPixmap pix2(imageIco2);
                                         QPixmap pix3(imageIco3);
                                         QPixmap pix4(imageIco4);
                                         QPixmap pix5(imageIco4);


                                        ui->affPrecisionnel1->setPixmap(pix1.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel2->setPixmap(pix2.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel3->setPixmap(pix3.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel4->setPixmap(pix4.scaled(H,W, Qt::KeepAspectRatio));
                                        ui->affPrecisionnel5->setPixmap(pix5.scaled(H,W, Qt::KeepAspectRatio));


                                }


                           }


                    }


        // Permet d'avoir un visu (voir classe méteoapi pour le reste);
        /*ui->affJour1->setText("Mardi");
        ui->affJour1->setText("Mercredi");
        ui->affJour1->setText("Jeudi");
        ui->affJour1->setText("Vendredi");
        ui->affJour1->setText("Samedi");*/





}
