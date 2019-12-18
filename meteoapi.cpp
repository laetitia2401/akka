#include "meteoapi.h"
#include <iostream>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkRequest>
#include <QUrl>
#include <QDebug>
#include <QNetworkReply>
#include <iostream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDir>



MeteoAPI::MeteoAPI()
{
    // QNetworkRequest request(QUrl("http://api.openweathermap.org/data/2.5/find?q=London&appid=479d7b90515d806879c5cccbe21077ee"));
     QNetworkRequest request(QUrl("http://api.openweathermap.org/data/2.5/weather?q=London,uk&APPID=479d7b90515d806879c5cccbe21077ee"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QNetworkAccessManager mgr;
        QNetworkReply * reply = mgr.get(request);

        while(!reply->isFinished())
        {
          //  qApp->processEvents();
        }

        QByteArray reponse = reply->readAll();
}

double MeteoAPI::getTemp() const
{
    return temp;
}

void MeteoAPI::setTemp(double value)
{

    temp = value;
}

// Conversion de Kelvin en Celcius
double MeteoAPI::convKC(double kelvin){

    double celcius = kelvin -273.15;

    return celcius;

}



