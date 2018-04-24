#include "Joueur.h"
#include <iostream>
#include <ctime>
#include <cstdlib>




Joueur::Joueur()
{
    nomJoueur = prenoms[rand()%5] + " " +noms[rand()%5];
}


void Joueur::Afficher() const
{
    std::cout<< nomJoueur << std::endl;
}

Joueur::~Joueur()
{
    //dtor
}
