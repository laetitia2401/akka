#include "meteojson.h"

#include <QNetworkRequest>

meteoJson::meteoJson()
{
    QString ville = "London";

   // QNetworkRequest request(QUrl("http://api.openweathermap.org/data/2.5/find?q=London&appid=479d7b90515d806879c5cccbe21077ee"));
    QNetworkRequest request(QUrl("http://api.openweathermap.org/data/2.5/weather?q=London,uk&APPID=479d7b90515d806879c5cccbe21077ee"));
       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

}
