/*
    ICHS   ICE HOCKEY CHAMPIONSHIP SIMULATOR



*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "joueur.h"
#include "Equipe.h"
#include "Match.h"
#include "Championnat.h"

using namespace std;

int main()
{
    cout << "Welcome to ICHS v0.1\n" << endl;
    srand(time(0));
    Joueur j1, j2, j3, j4, j5;
    j1.Afficher();
    j2.Afficher();
    j3.Afficher();
    j4.Afficher();
    j5.Afficher();
    Equipe team1("ARC_TIC_BEARS");
    team1.Engager(&j1);
    team1.Engager(&j2);
    team1.Engager(&j3);
    team1.Engager(&j4);
    team1.Engager(&j5);
    Equipe team2("MIGHTY DUCKS");
    team2.Engager(&j2);
    team2.Engager(&j2);
    team2.Engager(&j2);
    team2.Engager(&j2);
    team2.Engager(&j2);

    Championnat champ("SUPER ULTRA LEAGUE");
    champ.ajouterEquipe(team1);
    champ.ajouterEquipe(team2);
    champ.afficher();

    Match m(team1, team2);
    m.jouerMatch(true);
    return 0;
}
