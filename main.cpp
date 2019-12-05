#include <iostream>
#include <denis.h>
#include<florent.h>
#include <denis.cpp>
#include<florent.cpp>
#include<random>
#include<time.h>
#include<string>
#include<vector>

using namespace std;






int main()
{
    srand(time(nullptr));

    int magie;
    int arme;
    int handicape;
    int handicape2;
    int puissance;
    int puissance2;
    magie = rand()%5+1;
    arme = rand()%7+1;
    handicape = rand()%9+1;
    handicape2 = rand()%9+1;

    puissance= 10 / handicape;
    puissance2= 10/handicape2;


    AnimauxDeDenis *animal1 = new AnimauxDeDenis("carapuce",100,puissance,magie);
    AnimauxDeDenis *animal2 = new AnimauxDeDenis("bulbizarre",100,puissance,magie);
    AnimauxDeDenis *animal3 = new AnimauxDeDenis("florizarre",100,puissance,magie);
    AnimauxDeDenis *animal4 = new AnimauxDeDenis("salamèche",100,puissance,magie);
    AnimauxDeDenis *animal5 = new AnimauxDeDenis("carabaffe",100,puissance,magie);


    AnimauxDeFlorent *animal6 = new AnimauxDeFlorent("Mystherbe",100, puissance2, arme);
    AnimauxDeFlorent *animal7 = new AnimauxDeFlorent("Empiflor",100, puissance2, arme);
    AnimauxDeFlorent *animal8 = new AnimauxDeFlorent("Draco",100, puissance2, arme);
    AnimauxDeFlorent *animal9 = new AnimauxDeFlorent("Boustiflor", 100, puissance2, arme);
    AnimauxDeFlorent *animal10 = new AnimauxDeFlorent("Roucarnage", 100, puissance2, arme);

    vector<AnimauxDeDenis *> liste1 = {animal1,animal2,animal3,animal4,animal5};
    vector<AnimauxDeFlorent *> liste2 = {animal6,animal7,animal8,animal9,animal10};




    cout << "puissance arme Denis =  "<< animal2->magie<<"\n" << endl;
    cout << "puissance arme Florent = "<< animal6->arme <<"\n"<< endl;
    cout << "handicape de Denis = "<< puissance*10 <<"\n"<< endl;
    cout << "handicape de Florent = "<< puissance2*10<<"\n"<< endl;
    string gagnant = "";

    string str1;
    string str2;

    AnimauxDeDenis *joueur1;
    AnimauxDeFlorent *joueur2;

    cout << "Joueur 1 Choisissez votre personnage entre 0 et 4" << endl;
    cin >> str1 ;
    int i = stoi(str1);
    joueur1 = liste1[i];
//    cout << "c'est i : " << i <<endl;

    cout << "Joueur 2 Choisissez votre personnage entre 0 et 4" << endl;
    cin >> str2;
    int j = stoi(str2);
//    cout << "c'est j : " << j <<endl;
    joueur2 = liste2[j];
    while (joueur1->PV>0 && joueur2->PV>0)
    {
        joueur1->attaque(joueur2);
        joueur2->attaque(joueur1);
//        animal2->attaque(animal6);
//        animal6->attaque(animal2);


        if(joueur1->PV<0)
        {
            gagnant = "************ " + joueur2 -> nom + " a gagné le combat ************ ";
        }
        else
        {
            gagnant = "************ " + joueur1 -> nom + " a gagné le combat ************";
        }
    }




    cout << gagnant << endl;
    return 0;
}
