#include "florent.h"




AnimauxDeFlorent::AnimauxDeFlorent(string nom, int PV, int puissance, int arme)
    : Animaux(nom,PV,puissance)
{

    this->arme=arme;

}

void AnimauxDeFlorent::attaque_de_la_mort(Animaux *target){
    cout<<nom << " attaque "<<target->nom <<endl;
    target->PV= target->PV - (puissance*arme);
    cout<<"Il reste à "<<target ->nom <<" "<< target->PV <<" point de vie\n"<<endl;

};

void AnimauxDeFlorent::attaque_faible(Animaux *target){
    cout<<nom << " attaque "<<target->nom <<endl;
    target->PV = target->PV-(puissance*arme/3);
    cout<<"Il reste à "<<target ->nom <<" "<< target->PV <<" point de vie\n"<<endl;
};
