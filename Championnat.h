/*
    La classe championnat est la classe qui controlera le d�roulement de la simulation
    par
        - une liste d'�quipes
        - une liste de matches

    elle poss�de un nom.

    Pour l'exercice on demandera de la rendre instanciable une seule fois (singleton)

*/
#ifndef CHAMPIONNAT_H
#define CHAMPIONNAT_H
#include "Equipe.h"
#include "Match.h"
#include <iostream>
#include <vector>

class Championnat
{
    public:
        Championnat(std::string nom="Super Ligue");
        virtual ~Championnat();
        void afficher();
        void ajouterEquipe(Equipe&);
    protected:

    private:
        std::string nomChampionnat;
        std::vector<Equipe> equipes;
        std::vector<Match> parties;
};

#endif // CHAMPIONNAT_H
