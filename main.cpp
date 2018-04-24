/*
    ICHS   ICE HOCKEY CHAMPIONSHIP SIMULATOR



*/

#include <iostream>
#include "joueur.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Hello world!\n Welcome to ICHS v0.1" << endl;
    srand(time(0));
    Joueur j1, j2, j3;
    j1.Afficher();
    j2.Afficher();
    j3.Afficher();

    return 0;
}
