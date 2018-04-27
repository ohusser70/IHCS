#include "Championnat.h"

using namespace std;

Championnat::Championnat(string n)  : nomChampionnat(n)
{

}

void Championnat::afficher()
{
    std::cout<< nomChampionnat << std::endl;
    for (Equipe& v : equipes)
    {
        std::cout<<"+ ";
        v.Afficher();
    }

}

void Championnat::ajouterEquipe(Equipe& eq)
{
    this->equipes.push_back(eq);
}


Championnat::~Championnat()
{
    //dtor
}
