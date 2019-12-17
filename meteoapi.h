#ifndef METEOAPI_H
#define METEOAPI_H


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

};

#endif // METEOAPI_H
