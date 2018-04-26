#ifndef MATCH_H
#define MATCH_H
#include "Equipe.h"
#include <ctime>
#include <cstdlib>

class Match
{
    public:
        Match(Equipe&, Equipe&);
        virtual ~Match();
        void jouerMatch(bool=false);    //joue le match et met à jour les scores

    protected:

    private:
        Equipe& team1;
        Equipe& team2;
        int score1=0;
        int score2=0;
};

#endif // MATCH_H
