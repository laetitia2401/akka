#include "meteo.h"

QString Meteo::getId() const
{
    return id;
}

void Meteo::setId(const QString &value)
{
    id = value;
}

QString Meteo::getCoord_lan() const
{
    return coord_lan;
}

void Meteo::setCoord_lan(const QString &value)
{
    coord_lan = value;
}

QString Meteo::getCoord_lat() const
{
    return coord_lat;
}

void Meteo::setCoord_lat(const QString &value)
{
    coord_lat = value;
}

QString Meteo::getWeather_id() const
{
    return weather_id;
}

void Meteo::setWeather_id(const QString &value)
{
    weather_id = value;
}

QString Meteo::getWeather_main() const
{
    return weather_main;
}

void Meteo::setWeather_main(const QString &value)
{
    weather_main = value;
}

QString Meteo::getWeather_description() const
{
    return weather_description;
}

void Meteo::setWeather_description(const QString &value)
{
    weather_description = value;
}

QString Meteo::getWeather_icon() const
{
    return weather_icon;
}

void Meteo::setWeather_icon(const QString &value)
{
    weather_icon = value;
}

QString Meteo::getWeather_base() const
{
    return weather_base;
}

void Meteo::setWeather_base(const QString &value)
{
    weather_base = value;
}

QString Meteo::getMain_temps() const
{
    return main_temps;
}

void Meteo::setMain_temps(const QString &value)
{
    main_temps = value;
}

QString Meteo::getMain_felles_like() const
{
    return main_felles_like;
}

void Meteo::setMain_felles_like(const QString &value)
{
    main_felles_like = value;
}

QString Meteo::getMain_temps_min() const
{
    return main_temps_min;
}

void Meteo::setMain_temps_min(const QString &value)
{
    main_temps_min = value;
}

QString Meteo::getMain_pressure() const
{
    return main_pressure;
}

void Meteo::setMain_pressure(const QString &value)
{
    main_pressure = value;
}

QString Meteo::getMain_humidity() const
{
    return main_humidity;
}

void Meteo::setMain_humidity(const QString &value)
{
    main_humidity = value;
}

QString Meteo::getMain_visibility() const
{
    return main_visibility;
}

void Meteo::setMain_visibility(const QString &value)
{
    main_visibility = value;
}

Meteo::Meteo()
{

}


