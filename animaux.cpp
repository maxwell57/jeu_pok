#include "animaux.h"
#include <iostream>
#include <string>

using namespace std;

Animaux::Animaux(string nom, int PV, int puissance){

    srand(time(nullptr));





    this->nom=nom;
    this->puissance=puissance;
    this->PV=PV;
//    cout << "construction" << endl;

}



void Animaux::attaque(Animaux *target){
    int choix;
    choix = rand()%2;
    if(choix==0)
    {
        attaque_de_la_mort(target);
    }
    else
    {
        attaque_faible(target);
    }
//    cout << "choix :" << choix <<endl;

};
//void Animaux::attaque_de_la_mort(Animaux *target){}
//void Animaux::attaque_faible(Animaux *target){}





