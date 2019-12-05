#include "denis.h"


AnimauxDeDenis::AnimauxDeDenis(string name, int PVs, int puissances, int magie)
    : Animaux(name,PVs,puissances)
{
    this->magie=magie;

    //    void attaque_de_la_mort(Animaux*target);
    //    void attaque_faible(Animaux*target);


}

void AnimauxDeDenis::attaque_de_la_mort(Animaux *target){
    cout<<nom << " attaque "<<target->nom <<endl;
    target->PV= target->PV - (puissance*magie);
    cout<<"Il reste à "<<target ->nom <<" "<< target->PV <<" point de vie\n" <<endl;
};

void AnimauxDeDenis::attaque_faible(Animaux *target){
    cout<<nom << " attaque "<<target->nom <<endl;
    target->PV = target->PV-(puissance*magie/3);
    cout<<"Il reste à "<<target ->nom <<" "<< target->PV <<" point de vie\n" <<endl;
};
