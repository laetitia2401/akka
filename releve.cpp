#include "releve.h"

#include "mainwindow.h"
#include <QDebug>


Releve::Releve(QString a, QString b)
{
    this->setDateHeure(a);
    this->setUnite(b);
}

QString Releve::getDateHeure() const{

    return dateHeure;
}


void Releve::setDateHeure(const QString &value){

    dateHeure = value;
}

QString Releve::getUnite() const{

    return unite;
}


void Releve::setUnite(const QString &value){

    unite = value;
}

