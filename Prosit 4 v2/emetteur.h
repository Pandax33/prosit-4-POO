//
// Created by leanb on 10/11/2022.
//

#ifndef PROSIT_4_EMETTEUR_H
#define PROSIT_4_EMETTEUR_H
#include "recepteur.h"
#include <iostream>
using namespace std;

class emetteur {
private:
    int frequence;
public:
    emetteur(int frequence);
    int getFrequence();
    void signal(string,int);
};


#endif //PROSIT_4_EMETTEUR_H
