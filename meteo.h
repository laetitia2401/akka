#ifndef METEO_H
#define METEO_H

#include <QString>



class Meteo
{
protected:
    QString id;



public:
    Meteo();

    QString getId() const;
    void setId(const QString &value);

};

#endif // METEO_H
