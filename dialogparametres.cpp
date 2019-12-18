#include "dialogparametres.h"
#include "ui_dialogparametres.h"
#include <QImage>
#include <cstdio>
#include <cstdlib>
#include <cmath>
//using namespace QtCharts;
#define Y1  sin(x)

#define XMIN      -13.60
#define XMAX       13.60
#define XSCALE      1.0
#define YMIN       -6.71
#define YMAX        6.71
#define YSCALE      1.0

#define LARGEUR_SOUHAITEE   3000 // max = 1360
#define HAUTEUR_SOUHAITEE   3000 // max = 671
#define LARGEUR_ECRAN   1366
#define HAUTEUR_ECRAN   768
#define OFFSET_HAUT     37
#define OFFSET_BAS      60
#define OFFSET_GAUCHE   6
#define OFFSET_DROITE   0
#define EPAISSEUR_SCALE 10
int largeur = LARGEUR_SOUHAITEE;
int hauteur = HAUTEUR_SOUHAITEE;

DialogParametres::DialogParametres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogParametres)
{
    ui->setupUi(this);
    // 1.Dimensionnement de l'image
    if (largeur > LARGEUR_ECRAN - OFFSET_GAUCHE - OFFSET_DROITE)
      largeur = LARGEUR_ECRAN - OFFSET_GAUCHE - OFFSET_DROITE;
    if (hauteur > HAUTEUR_ECRAN - OFFSET_HAUT - OFFSET_BAS)
      hauteur = HAUTEUR_ECRAN - OFFSET_HAUT - OFFSET_BAS;
    image = QImage(QSize(largeur,hauteur), QImage::Format_RGB32);

    // 2.Creation des variables
    int                i,j,k;
    long double        x,y;
    unsigned long int* image_matrice = (unsigned long int*)calloc(largeur*hauteur,sizeof(unsigned long int));

    // 3.Creation d'une image blanche
    for (i = 0 ; i < largeur ; ++i)
      for (j = 0 ; j < hauteur ; ++j)
        image_matrice[i*hauteur+j] = 0x00ffffff;

    // 4.Trace des axes
    // Trace de l'axe x
    for (i = xtoi(XMIN) ; i <= xtoi(XMAX) ; ++i)
      {j = ytoj(0); if (validite(i,j)) image_matrice[i*hauteur+j] = 0x00ff0000;}
    // Trace de l'axe y
    for (j = ytoj(YMIN) ; j <= ytoj(YMAX) ; ++j)
      {i = xtoi(0); if (validite(i,j)) image_matrice[i*hauteur+j] = 0x00ff0000;}

    // 5.Trace des echelles
    // Trace de l'echelle x
    for (x = ceil(XMIN) ; x <= floor(XMAX) ; ++x)
      for (k = 0 ; k < EPAISSEUR_SCALE ; ++k)
        {i = xtoi(x); j = ytoj(0) - k; if (validite(i,j)) image_matrice[i*hauteur+j] = 0x00ff0000;}
    // Trace de l'echelle y
    for (y = ceil(YMIN) ; y <= floor(YMAX) ; ++y)
      for (k = 0 ; k < EPAISSEUR_SCALE ; ++k)
        {j = ytoj(y); i = xtoi(0) - k; if (validite(i,j)) image_matrice[i*hauteur+j] = 0x00ff0000;}

    // 6.Trace de la courbe y = f(x)
    for (i = xtoi(XMIN) ; i <= xtoi(XMAX) ; ++i)
      {x = itox(i); j = ytoj(Y1); if (validite(i,j)) image_matrice[i*hauteur+j] = 0x00000000;}

    // 7.Construction de l'image
    // Attention a la convention : chez moi, l'origine est en bas a gauche.
    for (i = 0 ; i < largeur ; ++i)
      for (j = 0 ; j < hauteur ; ++j)
        image.setPixel(QPoint(i,hauteur-1-j),image_matrice[i*hauteur+j]);

    // 8.Liberation de la memoire
    free(image_matrice);

    ui->affichageGraphique->setPixmap(QPixmap::fromImage(image));
    ui->affichageGraphique->resize(largeur,hauteur);
    ui->affichageGraphique->setScaledContents(true);
    ui->affichageGraphique->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);


}

DialogParametres::~DialogParametres()
{
    delete ui;
}

int xtoi(long double x)
{
  return (x-XMIN)/(XMAX-XMIN)*largeur;
}

int ytoj(long double y)
{
  return (y-YMIN)/(YMAX-YMIN)*hauteur;
}

long double itox(int i)
{
  return ((long double)i/largeur)*(XMAX-XMIN)+XMIN;
}

long double jtoy(int j)
{
  return ((long double)j/hauteur)*(YMAX-YMIN)+YMIN;
}

bool validite(int i,int j)
{
  if ((i<0) || (i>=largeur) || (j<0) || (j>=hauteur)) return 0;
  return 1;
}
