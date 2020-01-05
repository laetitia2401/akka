#ifndef METEOAPI_H
#define METEOAPI_H

#include <QString>



class MeteoAPI
{

protected:
    double temp;

public:
    MeteoAPI();
    double getTemp() const;
    void setTemp(double value);
    double convKC(double); //Conversion Kelvin -> Celcius
    double convKF(double); // Conversion Celcius -> Farhenheit

    QString recupIco(QString ico);
    QString recupIco2(QString ico);
    QString recupJour(QString jour);

};

#endif // METEOAPI_H
