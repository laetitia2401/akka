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

QString MeteoAPI::recupIco(QString ico){

    QString img;

    if(ico == "01d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "02d") img = ":/ico/images/weather-overcast.png";
    if(ico == "03d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "04n") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "04d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "09d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "10d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "11d") img = ":/ico/images/weather-storm.png";
    if(ico == "13d") img = ":/ico/images/weather-snow.png";


   /* switch(ico){

        case "01d":
            ":ico/images/fraise.jpg";
        break;
        case "02d":
        ":ico/images/fraise.jpg";
    break;
    default:
        ":ico/images/fraise.jpg";

    }*/

    return img;
}

QString MeteoAPI::recupIco2(QString ico){

    QString img;

    if(ico == "01d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "02d") img = ":/ico/images/weather-overcast.png";
    if(ico == "03d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "04n") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "04d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "09d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "10d") img = ":/ico/images/weather-few-clouds.png";
    if(ico == "11d") img = ":/ico/images/weather-storm.png";
    if(ico == "13d") img = ":/ico/images/weather-snow.png";


   /* switch(ico){

        case "01d":
            ":ico/images/fraise.jpg";
        break;
        case "02d":
        ":ico/images/fraise.jpg";
    break;
    default:
        ":ico/images/fraise.jpg";

    }*/

    return img;
}

QString MeteoAPI::recupJour(QString met)
{



}







