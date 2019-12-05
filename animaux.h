#ifndef ANIMAUX_H
#define ANIMAUX_H

#include <iostream>
#include<random>
#include<time.h>

using namespace std;

class Animaux

{
public:

    string nom;
    int PV;
    int puissance;

public:

    Animaux(string nom, int PV, int puissance ); // constructeur
    void attaque(Animaux *target);
    virtual void attaque_de_la_mort(Animaux*target)=0;
    virtual void attaque_faible(Animaux*target)=0;

};


#endif // ANIMAUX_H
