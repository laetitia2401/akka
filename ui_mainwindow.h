/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPararemetres;
    QAction *actionQuitter;
    QWidget *centralWidget;
    QLabel *dateHeure;
    QLabel *tempInt;
    QLabel *tauxHumidInt;
    QLabel *pressionInt;
    QLabel *tempExt;
    QLabel *images;
    QLabel *ville;
    QLabel *tempIntExt;
    QLabel *difTempExtInt;
    QLabel *resTempIntIdeal;
    QLabel *pres5jrsSuivant;
    QLabel *calPointRos;
    QLabel *affichageDateHeure;
    QLabel *affichageTemp;
    QLabel *affTauxHumInt;
    QLabel *affPressionInt;
    QLabel *affTempExt;
    QLabel *affImages;
    QLabel *affVille;
    QLabel *affTempIntExt;
    QLabel *affDiffTempIntExt;
    QLabel *affResTempIdeale;
    QLabel *affPrecisionnel;
    QLabel *affCalRoseTempHum;
    QMenuBar *menuBar;
    QMenu *menuParametrer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(707, 784);
        actionPararemetres = new QAction(MainWindow);
        actionPararemetres->setObjectName(QString::fromUtf8("actionPararemetres"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        dateHeure = new QLabel(centralWidget);
        dateHeure->setObjectName(QString::fromUtf8("dateHeure"));
        dateHeure->setGeometry(QRect(10, 10, 91, 31));
        tempInt = new QLabel(centralWidget);
        tempInt->setObjectName(QString::fromUtf8("tempInt"));
        tempInt->setGeometry(QRect(10, 60, 81, 31));
        tauxHumidInt = new QLabel(centralWidget);
        tauxHumidInt->setObjectName(QString::fromUtf8("tauxHumidInt"));
        tauxHumidInt->setGeometry(QRect(10, 100, 151, 21));
        pressionInt = new QLabel(centralWidget);
        pressionInt->setObjectName(QString::fromUtf8("pressionInt"));
        pressionInt->setGeometry(QRect(10, 140, 121, 31));
        tempExt = new QLabel(centralWidget);
        tempExt->setObjectName(QString::fromUtf8("tempExt"));
        tempExt->setGeometry(QRect(10, 190, 141, 31));
        images = new QLabel(centralWidget);
        images->setObjectName(QString::fromUtf8("images"));
        images->setGeometry(QRect(10, 240, 121, 31));
        ville = new QLabel(centralWidget);
        ville->setObjectName(QString::fromUtf8("ville"));
        ville->setGeometry(QRect(10, 290, 81, 31));
        tempIntExt = new QLabel(centralWidget);
        tempIntExt->setObjectName(QString::fromUtf8("tempIntExt"));
        tempIntExt->setGeometry(QRect(0, 340, 241, 31));
        difTempExtInt = new QLabel(centralWidget);
        difTempExtInt->setObjectName(QString::fromUtf8("difTempExtInt"));
        difTempExtInt->setGeometry(QRect(0, 410, 311, 31));
        resTempIntIdeal = new QLabel(centralWidget);
        resTempIntIdeal->setObjectName(QString::fromUtf8("resTempIntIdeal"));
        resTempIntIdeal->setGeometry(QRect(0, 470, 301, 31));
        pres5jrsSuivant = new QLabel(centralWidget);
        pres5jrsSuivant->setObjectName(QString::fromUtf8("pres5jrsSuivant"));
        pres5jrsSuivant->setGeometry(QRect(0, 540, 271, 31));
        calPointRos = new QLabel(centralWidget);
        calPointRos->setObjectName(QString::fromUtf8("calPointRos"));
        calPointRos->setGeometry(QRect(10, 610, 331, 41));
        affichageDateHeure = new QLabel(centralWidget);
        affichageDateHeure->setObjectName(QString::fromUtf8("affichageDateHeure"));
        affichageDateHeure->setEnabled(true);
        affichageDateHeure->setGeometry(QRect(140, 10, 141, 31));
        affichageDateHeure->setStyleSheet(QString::fromUtf8("border"));
        affichageDateHeure->setScaledContents(false);
        affichageDateHeure->setAlignment(Qt::AlignCenter);
        affichageDateHeure->setWordWrap(false);
        affichageTemp = new QLabel(centralWidget);
        affichageTemp->setObjectName(QString::fromUtf8("affichageTemp"));
        affichageTemp->setGeometry(QRect(150, 60, 101, 31));
        affichageTemp->setAlignment(Qt::AlignCenter);
        affTauxHumInt = new QLabel(centralWidget);
        affTauxHumInt->setObjectName(QString::fromUtf8("affTauxHumInt"));
        affTauxHumInt->setGeometry(QRect(190, 97, 171, 31));
        affTauxHumInt->setAlignment(Qt::AlignCenter);
        affPressionInt = new QLabel(centralWidget);
        affPressionInt->setObjectName(QString::fromUtf8("affPressionInt"));
        affPressionInt->setGeometry(QRect(210, 140, 101, 31));
        affPressionInt->setAlignment(Qt::AlignCenter);
        affTempExt = new QLabel(centralWidget);
        affTempExt->setObjectName(QString::fromUtf8("affTempExt"));
        affTempExt->setGeometry(QRect(220, 190, 111, 31));
        affTempExt->setAlignment(Qt::AlignCenter);
        affImages = new QLabel(centralWidget);
        affImages->setObjectName(QString::fromUtf8("affImages"));
        affImages->setGeometry(QRect(180, 250, 111, 21));
        affImages->setAlignment(Qt::AlignCenter);
        affVille = new QLabel(centralWidget);
        affVille->setObjectName(QString::fromUtf8("affVille"));
        affVille->setGeometry(QRect(140, 290, 91, 31));
        affVille->setAlignment(Qt::AlignCenter);
        affTempIntExt = new QLabel(centralWidget);
        affTempIntExt->setObjectName(QString::fromUtf8("affTempIntExt"));
        affTempIntExt->setGeometry(QRect(270, 340, 111, 31));
        affTempIntExt->setAlignment(Qt::AlignCenter);
        affDiffTempIntExt = new QLabel(centralWidget);
        affDiffTempIntExt->setObjectName(QString::fromUtf8("affDiffTempIntExt"));
        affDiffTempIntExt->setGeometry(QRect(350, 407, 141, 31));
        affDiffTempIntExt->setAlignment(Qt::AlignCenter);
        affResTempIdeale = new QLabel(centralWidget);
        affResTempIdeale->setObjectName(QString::fromUtf8("affResTempIdeale"));
        affResTempIdeale->setGeometry(QRect(330, 470, 101, 31));
        affResTempIdeale->setAlignment(Qt::AlignCenter);
        affPrecisionnel = new QLabel(centralWidget);
        affPrecisionnel->setObjectName(QString::fromUtf8("affPrecisionnel"));
        affPrecisionnel->setGeometry(QRect(260, 540, 91, 31));
        affPrecisionnel->setAlignment(Qt::AlignCenter);
        affCalRoseTempHum = new QLabel(centralWidget);
        affCalRoseTempHum->setObjectName(QString::fromUtf8("affCalRoseTempHum"));
        affCalRoseTempHum->setGeometry(QRect(360, 610, 121, 41));
        affCalRoseTempHum->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 707, 30));
        menuParametrer = new QMenu(menuBar);
        menuParametrer->setObjectName(QString::fromUtf8("menuParametrer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuParametrer->menuAction());
        menuParametrer->addAction(actionPararemetres);
        menuParametrer->addAction(actionQuitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionPararemetres->setText(QApplication::translate("MainWindow", "Param\303\251trer", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        dateHeure->setText(QApplication::translate("MainWindow", "date et heure", 0));
        tempInt->setText(QApplication::translate("MainWindow", "temperature", 0));
        tauxHumidInt->setText(QApplication::translate("MainWindow", "taux humidite interieur", 0));
        pressionInt->setText(QApplication::translate("MainWindow", "pression interieur", 0));
        tempExt->setText(QApplication::translate("MainWindow", "temperature exterieur", 0));
        images->setText(QApplication::translate("MainWindow", "images", 0));
        ville->setText(QApplication::translate("MainWindow", "ville : ", 0));
        tempIntExt->setText(QApplication::translate("MainWindow", "indication temperatue interieur et ext", 0));
        difTempExtInt->setText(QApplication::translate("MainWindow", "difference entre la temperature exterieur et interieur :", 0));
        resTempIntIdeal->setText(QApplication::translate("MainWindow", "resolution de la temperature interieure ideale :", 0));
        pres5jrsSuivant->setText(QApplication::translate("MainWindow", "previsionnel pour les 5 jours suivants :", 0));
        calPointRos->setText(QApplication::translate("MainWindow", "Calcul du point de ros\303\251e et de la temperature humidex:", 0));
        affichageDateHeure->setText(QApplication::translate("MainWindow", "affichage", 0));
        affichageTemp->setText(QApplication::translate("MainWindow", "affichage", 0));
        affTauxHumInt->setText(QApplication::translate("MainWindow", "affichage", 0));
        affPressionInt->setText(QApplication::translate("MainWindow", "affichage", 0));
        affTempExt->setText(QApplication::translate("MainWindow", "affichage", 0));
        affImages->setText(QApplication::translate("MainWindow", "affichage", 0));
        affVille->setText(QApplication::translate("MainWindow", "affichage", 0));
        affTempIntExt->setText(QApplication::translate("MainWindow", "affichage", 0));
        affDiffTempIntExt->setText(QApplication::translate("MainWindow", "affichage", 0));
        affResTempIdeale->setText(QApplication::translate("MainWindow", "affichage", 0));
        affPrecisionnel->setText(QApplication::translate("MainWindow", "affichage", 0));
        affCalRoseTempHum->setText(QApplication::translate("MainWindow", "affichage", 0));
        menuParametrer->setTitle(QApplication::translate("MainWindow", "ad&mnistrateur", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
