#ifndef METEO_H
#define METEO_H

#include <QString>



class Meteo
{
protected:
    QString id;
    QString coord_lan;
    QString coord_lat;
    QString weather_id;
    QString weather_main;
    QString weather_description;
    QString weather_icon;
    QString weather_base;
    QString main_temps;
    QString main_felles_like;
    QString main_temps_min;
    QString main_pressure;
    QString main_humidity;
    QString main_visibility;


public:
    Meteo();

    QString getId() const;
    void setId(const QString &value);
    QString getCoord_lan() const;
    void setCoord_lan(const QString &value);
    QString getCoord_lat() const;
    void setCoord_lat(const QString &value);
    QString getWeather_id() const;
    void setWeather_id(const QString &value);
    QString getWeather_main() const;
    void setWeather_main(const QString &value);
    QString getWeather_description() const;
    void setWeather_description(const QString &value);
    QString getWeather_icon() const;
    void setWeather_icon(const QString &value);
    QString getWeather_base() const;
    void setWeather_base(const QString &value);
    QString getMain_temps() const;
    void setMain_temps(const QString &value);
    QString getMain_felles_like() const;
    void setMain_felles_like(const QString &value);
    QString getMain_temps_min() const;
    void setMain_temps_min(const QString &value);
    QString getMain_pressure() const;
    void setMain_pressure(const QString &value);
    QString getMain_humidity() const;
    void setMain_humidity(const QString &value);
    QString getMain_visibility() const;
    void setMain_visibility(const QString &value);
};

#endif // METEO_H
