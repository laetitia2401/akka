#ifndef RELEVE_H
#define RELEVE_H

#include <QString>



class Releve
{
protected:
    QString dateHeure;
    QString unite;
public:
    Releve(QString, QString);

    QString getDateHeure() const;
    void setDateHeure(const QString &value);

    QString getUnite() const;
    void setUnite(const QString &value);
};

#endif // RELEVE_H

