#include "relevedb.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "mainwindow.h"
#include <QDebug>
#include <QVector>


Relevedb::Relevedb()
{

}

void Relevedb::ajout(QString dateHeure, QString unite){

    //QVector<QString> val(0);

    QSqlQuery query;
    query.prepare("INSERT INTO releve (dateHeure, unite)"
                    "VALUES (:dateHeure, :unite)");
    query.bindValue(":dateHeure", dateHeure);
    query.bindValue(":unite", unite);
    query.exec();

}

QString Relevedb::recup(Releve p){

    //QVector<QString> val(0);

    QSqlQuery query("SELECT * FROM releve");

    while (query.next()) {

       // int id = query.value(0).toInt();
        QString dateHeure = query.value(0).toString();

        QString unite = query.value(1).toString();

        p.setDateHeure(dateHeure);
        p.setUnite(unite);


            qDebug() << " dateHeure : " << dateHeure;

           return p.getDateHeure() + p.getUnite();

        }

    return nullptr;
}

