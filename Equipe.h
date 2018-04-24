/*

    This is the Team class for IHCS keeping stats of Team during championship


    V.1.0 OHU
*/

#include <iostream>
#include "Joueur.h"
#ifndef EQUIPE_H
#define EQUIPE_H


class Equipe
{
    public:

        std::string nom;    // Le nom de l'equipe p.ex. "HCC", "LHC"
        short ID;           // Un numéro qui devrait être unique
        int  niveauEquipe;  // la somme de la force des niveaux de l'equipe
        Joueur* joueurs[5]; //  les joueurs de l'equipe

        void Engager(Joueur* j);
        void Afficher();

        Equipe(std::string _nom);
        virtual ~Equipe();

    protected:

    private:

        int nombreJoueurs=0;
};

#endif // EQUIPE_H
