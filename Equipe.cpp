#include "Equipe.h"

Equipe::Equipe(std::string n)
{
   nom = n;
   this->niveauEquipe = 0;
}

void Equipe::Afficher()
{
    std::cout << this->nom <<
    "(" << this->niveauEquipe<< ")" <<std::endl;
}

void Equipe::Engager(Joueur* j)
{
    joueurs[nombreJoueurs++] = j;
    niveauEquipe += j->niveauJoueur;
}

Equipe::~Equipe()
{
    //dtor
}
