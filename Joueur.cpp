#include "Joueur.h"
#include <iostream>
#include <ctime>
#include <cstdlib>




Joueur::Joueur()
{
    nomJoueur = prenoms[rand()%5] + " " +noms[rand()%5];
    this->niveauJoueur = rand()%100 +1;
}


void Joueur::Afficher() const
{
    std::cout<< nomJoueur << " (niveau: " << niveauJoueur<<")"<< std::endl;
}

Joueur::~Joueur()
{
    //dtor
}
