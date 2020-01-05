#include "dialogparametres.h"
#include "ui_dialogparametres.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <QSqlQuery>
#include <QDebug>
#include <QRadioButton>
#include <QComboBox>

DialogParametres::DialogParametres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogParametres)

{

    ui->setupUi(this);

    connect(ui->rbArial, SIGNAL(clicked()), this, SLOT(on_rbPolices_checked()));

    connect(ui->rbComic, SIGNAL(clicked()), this, SLOT(on_rbPolices_checked()));

    connect(ui->rbTimes, SIGNAL(clicked()), this, SLOT(on_rbPolices_checked()));

}
DialogParametres::~DialogParametres()

{
    delete ui;
}

void DialogParametres::on_rbPolices_checked()

{

    QObject * objSender = sender();
    QRadioButton *rb = (QRadioButton*)(objSender);
    //mise a jour de la qdialog pour la police
    //format d'heure
    ui->lblFormatHeure->setFont(QFont(rb->text()));
    ui->groupBoxFomHeure->setFont(QFont(rb->text()));
    //ville
    ui->lblVille->setFont(QFont(rb->text()));
    ui->cBoxVille->setFont(QFont(rb->text()));
    //unite temperature
    ui->lblUniteTemp->setFont(QFont(rb->text()));
    ui->groupBoxFomHeure->setFont(QFont(rb->text()));
    //Police
    ui->lblPolice->setFont(QFont(rb->text()));
    ui->rbArial->setFont(QFont(rb->text()));
    ui->rbComic->setFont(QFont(rb->text()));
    ui->rbTimes->setFont(QFont(rb->text()));
    //mode
    ui->lblMode->setFont(QFont(rb->text()));
    ui->groupBoxMode->setFont(QFont(rb->text()));
    //langue
    ui->lblLangue->setFont(QFont(rb->text()));
    ui->groupboxRadioLangue->setFont(QFont(rb->text()));
    //label evolution temperature
    ui->lblEvo12Heures->setFont(QFont(rb->text()));

}

void DialogParametres::on_buttonBox_accepted()

{
    int  formHeure;
    QString mode;
    QString unitTemp;
    QString police;
    QString langue;
    //formatheure
    if (ui->rb12->isChecked())
    {
        formHeure= 12;
    }

    if (ui->rb24->isChecked())
    {
        formHeure = 24;
    }
    //UniteTemperature
    if (ui->rbFahrenheit->isChecked())
    {
        unitTemp = "Fahrenheit";
    }

    if (ui->rbCelsius->isChecked())
    {
        unitTemp = "Celsuis";
    }
    //police
    if (ui->rbArial->isChecked())
    {
        police = "Arial";
    }

    if (ui->rbComic->isChecked())
    {
        police = "Comic";
    }
    if (ui->rbTimes->isChecked())
    {
        police = "Times";
    }
    //mode
    if (ui->radioButtonJour->isChecked())
    {
        mode = "jour";
    }

    if (ui->radioButtonNuit->isChecked())
    {
        mode = "nuit";
    }
    //langue
    if (ui->radioButAngl->isChecked())
    {
        langue = "Anglais";
    }

    if (ui->radioButFranc->isChecked())
    {
        langue = "Francais";
    }

    //requete de sauvegarde des parametres*************************************************************
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

        db.setDatabaseName("/home/tia/Documents/propre/station-meteo/meteo.db");

        bool ok = db.open();

        if(!ok){ qDebug() << "Err Cnx ! "; }else{

            qDebug() << " Cnx Ok ! ";

                QSqlQuery query;

                query.prepare("INSERT INTO parametres (formatHeure, ville,UniteTemperature,police,couleur,mode,langue)"

                                "VALUES (:formatHeure, :ville, :UniteTemperature , :police, :couleur, :mode , :langue)");

                query.bindValue(":formatHeure",formHeure);

                query.bindValue(":ville",ui->cBoxVille->currentText());

                query.bindValue(":UniteTemperature",unitTemp);

                query.bindValue(":police",police);

                query.bindValue(":couleur","gris");

                query.bindValue(":mode",mode);

                query.bindValue(":langue",langue);

                query.exec();

        }

    db.close();

}
