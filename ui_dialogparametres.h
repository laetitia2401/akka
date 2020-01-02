/********************************************************************************
** Form generated from reading UI file 'dialogparametres.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPARAMETRES_H
#define UI_DIALOGPARAMETRES_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDialog>
#include <QDialogButtonBox>
#include <QGroupBox>
#include <QHeaderView>
#include <QLabel>
#include <QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DialogParametres
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lblFormatHeure;
    QLabel *lblVille;
    QLabel *lblUniteTemp;
    QLabel *lblPolice;
    QLabel *lblLangue;
    QLabel *lblEvo12Heures;
    QLabel *affichageGraphique;
    QGroupBox *groupBoxFomHeure;
    QRadioButton *rb12;
    QRadioButton *rb24;
    QComboBox *cBoxVille;
    QGroupBox *groupBox;
    QRadioButton *rbCelsius;
    QRadioButton *rbFahrenheit;
    QLabel *lblMode;
    QGroupBox *groupBoxMode;
    QRadioButton *radioButtonJour;
    QRadioButton *radioButtonNuit;
    QGroupBox *groupboxRadioLangue;
    QRadioButton *radioButFranc;
    QRadioButton *radioButAngl;
    QGroupBox *groupBoxPolices;
    QRadioButton *rbArial;
    QRadioButton *rbComic;
    QRadioButton *rbTimes;

    void setupUi(QDialog *DialogParametres)
    {
        if (DialogParametres->objectName().isEmpty())
            DialogParametres->setObjectName(QString::fromUtf8("DialogParametres"));
        DialogParametres->resize(809, 746);
        buttonBox = new QDialogButtonBox(DialogParametres);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(450, 690, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lblFormatHeure = new QLabel(DialogParametres);
        lblFormatHeure->setObjectName(QString::fromUtf8("lblFormatHeure"));
        lblFormatHeure->setGeometry(QRect(20, 20, 151, 31));
        lblFormatHeure->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblVille = new QLabel(DialogParametres);
        lblVille->setObjectName(QString::fromUtf8("lblVille"));
        lblVille->setGeometry(QRect(20, 60, 111, 31));
        lblVille->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblUniteTemp = new QLabel(DialogParametres);
        lblUniteTemp->setObjectName(QString::fromUtf8("lblUniteTemp"));
        lblUniteTemp->setGeometry(QRect(20, 110, 161, 31));
        lblUniteTemp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblPolice = new QLabel(DialogParametres);
        lblPolice->setObjectName(QString::fromUtf8("lblPolice"));
        lblPolice->setGeometry(QRect(20, 170, 131, 31));
        lblPolice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblLangue = new QLabel(DialogParametres);
        lblLangue->setObjectName(QString::fromUtf8("lblLangue"));
        lblLangue->setGeometry(QRect(20, 380, 121, 31));
        lblEvo12Heures = new QLabel(DialogParametres);
        lblEvo12Heures->setObjectName(QString::fromUtf8("lblEvo12Heures"));
        lblEvo12Heures->setGeometry(QRect(20, 430, 421, 31));
        affichageGraphique = new QLabel(DialogParametres);
        affichageGraphique->setObjectName(QString::fromUtf8("affichageGraphique"));
        affichageGraphique->setGeometry(QRect(20, 490, 771, 171));
        affichageGraphique->setAlignment(Qt::AlignCenter);
        groupBoxFomHeure = new QGroupBox(DialogParametres);
        groupBoxFomHeure->setObjectName(QString::fromUtf8("groupBoxFomHeure"));
        groupBoxFomHeure->setGeometry(QRect(200, 0, 221, 61));
        rb12 = new QRadioButton(groupBoxFomHeure);
        rb12->setObjectName(QString::fromUtf8("rb12"));
        rb12->setGeometry(QRect(10, 20, 102, 20));
        rb24 = new QRadioButton(groupBoxFomHeure);
        rb24->setObjectName(QString::fromUtf8("rb24"));
        rb24->setGeometry(QRect(110, 20, 102, 20));
        cBoxVille = new QComboBox(DialogParametres);
        cBoxVille->setObjectName(QString::fromUtf8("cBoxVille"));
        cBoxVille->setGeometry(QRect(200, 60, 221, 32));
        groupBox = new QGroupBox(DialogParametres);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 90, 221, 61));
        rbCelsius = new QRadioButton(groupBox);
        rbCelsius->setObjectName(QString::fromUtf8("rbCelsius"));
        rbCelsius->setGeometry(QRect(10, 20, 102, 20));
        rbFahrenheit = new QRadioButton(groupBox);
        rbFahrenheit->setObjectName(QString::fromUtf8("rbFahrenheit"));
        rbFahrenheit->setGeometry(QRect(110, 20, 102, 20));
        lblMode = new QLabel(DialogParametres);
        lblMode->setObjectName(QString::fromUtf8("lblMode"));
        lblMode->setGeometry(QRect(20, 320, 101, 31));
        groupBoxMode = new QGroupBox(DialogParametres);
        groupBoxMode->setObjectName(QString::fromUtf8("groupBoxMode"));
        groupBoxMode->setGeometry(QRect(200, 300, 221, 61));
        radioButtonJour = new QRadioButton(groupBoxMode);
        radioButtonJour->setObjectName(QString::fromUtf8("radioButtonJour"));
        radioButtonJour->setGeometry(QRect(10, 20, 102, 20));
        radioButtonNuit = new QRadioButton(groupBoxMode);
        radioButtonNuit->setObjectName(QString::fromUtf8("radioButtonNuit"));
        radioButtonNuit->setGeometry(QRect(120, 20, 102, 20));
        groupboxRadioLangue = new QGroupBox(DialogParametres);
        groupboxRadioLangue->setObjectName(QString::fromUtf8("groupboxRadioLangue"));
        groupboxRadioLangue->setGeometry(QRect(200, 359, 221, 61));
        radioButFranc = new QRadioButton(groupboxRadioLangue);
        radioButFranc->setObjectName(QString::fromUtf8("radioButFranc"));
        radioButFranc->setGeometry(QRect(10, 20, 102, 20));
        radioButAngl = new QRadioButton(groupboxRadioLangue);
        radioButAngl->setObjectName(QString::fromUtf8("radioButAngl"));
        radioButAngl->setGeometry(QRect(120, 20, 102, 20));
        groupBoxPolices = new QGroupBox(DialogParametres);
        groupBoxPolices->setObjectName(QString::fromUtf8("groupBoxPolices"));
        groupBoxPolices->setGeometry(QRect(10, 190, 411, 111));
        rbArial = new QRadioButton(groupBoxPolices);
        rbArial->setObjectName(QString::fromUtf8("rbArial"));
        rbArial->setGeometry(QRect(20, 50, 102, 20));
        rbComic = new QRadioButton(groupBoxPolices);
        rbComic->setObjectName(QString::fromUtf8("rbComic"));
        rbComic->setGeometry(QRect(140, 50, 102, 20));
        rbTimes = new QRadioButton(groupBoxPolices);
        rbTimes->setObjectName(QString::fromUtf8("rbTimes"));
        rbTimes->setGeometry(QRect(260, 50, 141, 20));

        retranslateUi(DialogParametres);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogParametres, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogParametres, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogParametres);
    } // setupUi

    void retranslateUi(QDialog *DialogParametres)
    {
        DialogParametres->setWindowTitle(QApplication::translate("DialogParametres", "Dialog", 0));
        lblFormatHeure->setText(QApplication::translate("DialogParametres", "Format de l'heure :", 0));
        lblVille->setText(QApplication::translate("DialogParametres", "ville :", 0));
        lblUniteTemp->setText(QApplication::translate("DialogParametres", "Unit\303\251 de Temp\303\251rature :", 0));
        lblPolice->setText(QApplication::translate("DialogParametres", "Police :", 0 ));
        lblLangue->setText(QApplication::translate("DialogParametres", "Langue :", 0 ));
        lblEvo12Heures->setText(QApplication::translate("DialogParametres", "Evolution de la temp\303\251rature int\303\251rieur des 12 dernieres heures:", 0 ));
        affichageGraphique->setText(QApplication::translate("DialogParametres", "affichage graphique", 0 ));
        groupBoxFomHeure->setTitle(QString());
        rb12->setText(QApplication::translate("DialogParametres", "&12h", 0 ));
        rb24->setText(QApplication::translate("DialogParametres", "&24 h", 0 ));
        cBoxVille->clear();
        cBoxVille->insertItems(0, QStringList()
         << QApplication::translate("DialogParametres", "Paris", 0 )
         << QApplication::translate("DialogParametres", "Toulouse", 0 )
         << QApplication::translate("DialogParametres", "Grenoble", 0 )
         << QApplication::translate("DialogParametres", "Nantes", 0 )
         << QApplication::translate("DialogParametres", "Bordeaux", 0 )
         << QApplication::translate("DialogParametres", "Lyon", 0 )
         << QApplication::translate("DialogParametres", "Nice", 0 )
        );
        groupBox->setTitle(QString());
        rbCelsius->setText(QApplication::translate("DialogParametres", "Celsius", 0 ));
        rbFahrenheit->setText(QApplication::translate("DialogParametres", "Fahrenheit", 0 ));
        lblMode->setText(QApplication::translate("DialogParametres", "Mode :", 0 ));
        groupBoxMode->setTitle(QString());
        radioButtonJour->setText(QApplication::translate("DialogParametres", "Jour", 0 ));
        radioButtonNuit->setText(QApplication::translate("DialogParametres", "Nui&t", 0 ));
        groupboxRadioLangue->setTitle(QString());
        radioButFranc->setText(QApplication::translate("DialogParametres", "F&rancais", 0 ));
        radioButAngl->setText(QApplication::translate("DialogParametres", "Anglais", 0 ));
        groupBoxPolices->setTitle(QString());
        rbArial->setText(QApplication::translate("DialogParametres", "Arial", 0 ));
        rbComic->setText(QApplication::translate("DialogParametres", "Courrier", 0 ));
        rbTimes->setText(QApplication::translate("DialogParametres", "&Times New Roman", 0 ));
    } // retranslateUi

};

namespace Ui {
    class DialogParametres: public Ui_DialogParametres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPARAMETRES_H
