#ifndef RELEVEDB_H
#define RELEVEDB_H

#include "releve.h"

#include <QString>
#include <QVector>


class Relevedb
{
public:
    Relevedb();
    void ajout(QString, QString);
    QString recup(Releve);
};

#endif // RELEVEDB_H
