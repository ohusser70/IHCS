#include "Match.h"

Match::Match(Equipe& eq1, Equipe& eq2) : team1(eq1), team2(eq2)
{
    srand(time(0));
}

Match::~Match()
{
    //dtor
}

///
void  Match::jouerMatch(bool afficheScore)
{
    // 1 calcul du score
    score1= rand()%(team1.niveauEquipe/40);
    score2= rand()%(team2.niveauEquipe/40);
    if (afficheScore == true)
        std::cout << team1.nom << ": " <<score1<<"  -  "<< team2.nom << ": " <<score2 << std::endl;
    // 2. Evolution des niveaux des joueurs et de la fatigue
}
