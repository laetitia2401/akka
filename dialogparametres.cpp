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

    //formatheure

    QObject * objSenderHeure = sender();

    QRadioButton *rbFormat=(QRadioButton*)(objSenderHeure);

    //ville

    QObject * objSenderVille = sender();
    QComboBox *cb=(QComboBox*)(objSenderVille);
    //UniteTemperature
    QObject * objSenderUniteTemp = sender();
    QRadioButton *rbUnite=(QRadioButton*)(objSenderUniteTemp);
    //police
    QObject * objSender = sender();
    QRadioButton *rb = (QRadioButton*)(objSender);
    //couleur
    QObject * objSenderCouleur = sender();
    QComboBox *cbCoul=(QComboBox*)(objSenderCouleur);
    //mode
    QObject * objSenderMode = sender();
    QRadioButton *rbMode=(QRadioButton*)(objSenderMode);
    //langue
    QObject * objSenderLangue = sender();
    QRadioButton *rbLangue = (QRadioButton*)(objSenderLangue);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

        db.setDatabaseName("/home/tia/Documents/station-meteo/meteo.db");

        bool ok = db.open();

        if(!ok){ qDebug() << "Err Cnx ! "; }else{

            qDebug() << " Cnx Ok ! ";

                QSqlQuery query;

                query.prepare("INSERT INTO parametres (formatHeure, ville,UniteTemperature,police,couleur,mode,langue)"

                                "VALUES (:formatHeure, :ville, :UniteTemperature , :police, :couleur, :mode , :langue)");

                query.bindValue(":formatHeure",rbFormat->text());

                query.bindValue(":ville",cb->currentText());

                query.bindValue(":UniteTemperature",rbUnite->text());

                query.bindValue(":police",rb->text());

                query.bindValue(":couleur",cbCoul->currentText());

                query.bindValue(":mode",rbMode->text());

                query.bindValue(":langue",rbLangue->text());

                query.exec();

        }

    db.close();

}


