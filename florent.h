#ifndef FLORENT_H
#define FLORENT_H
#include "animaux.h"
#include <iostream>
#include <string>


class AnimauxDeFlorent : public Animaux // hérite de Animaux

{

public:
    int arme; //compris entre 0 et 4


public:
    AnimauxDeFlorent(string nom, int PV, int puissance, int arme);

    void attaque_de_la_mort(Animaux*target);
    void attaque_faible(Animaux*target);

};


#endif // FLORENT_H
