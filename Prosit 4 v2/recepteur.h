//
// Created by leanb on 12/11/2022.
//

#ifndef PROSIT_4_V2_RECEPTEUR_H
#define PROSIT_4_V2_RECEPTEUR_H
#include <iostream>
using namespace std;
typedef void (*evt)(string, int);
extern evt e;

typedef  struct messages{
    string message;
    int frequence;
    messages* suivant;
}message;

class recepteur {
private:
    static message* messageDebut;
    static message* messageFin;
    int* listeFrequence;
    int nombreFrequence;
public:

    recepteur(int);
    ~recepteur();
    static void ecoute(string,int);
    void lecture(int);



};


#endif //PROSIT_4_V2_RECEPTEUR_H
