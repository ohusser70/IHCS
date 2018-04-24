/*

    This is the Player class for IHCS keeping stats of Player



*/
#include <iostream>

#ifndef JOUEUR_H
#define JOUEUR_H





class Joueur
{
    friend class Equipe;
    std::string prenoms[5]={ "Christophe", "Sven", "Erik", "Pablo", "Jules"};
    std::string noms[5]={ "Bays", "Pavoni", "Cretin", "Gretzky", "Bykov"};
    public:
        Joueur();
        virtual ~Joueur();
        void Afficher() const;
    protected:

    private:
        int NombreButs=0;
        int niveauJoueur=50;
        std::string nomJoueur;

};

#endif // JOUEUR_H
