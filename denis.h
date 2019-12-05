#ifndef DENIS_H
#define DENIS_H
#include "animaux.h"
#include "florent.h"
#include <iostream>
#include <string>

class AnimauxDeDenis : public Animaux // hérite de Animaux
{

public:
    int magie; //compris entre 0 et 2


public:
    AnimauxDeDenis(string nom, int PV, int puissance, int magie); //constructeur

    void attaque_de_la_mort(Animaux*target);
    void attaque_faible(Animaux*target);

};



#endif // DENIS_H
