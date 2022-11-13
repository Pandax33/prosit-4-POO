//
// Created by leanb on 12/11/2022.
//

#include "emetteur.h"

//
// Created by leanb on 10/11/2022.
//

#include "emetteur.h"

typedef void (*evt)(std::string, int);
extern evt e;


emetteur::emetteur(int frequence) {
    this->frequence=frequence;
}
void emetteur::signal(string message,int frequence) {
    e= &recepteur::ecoute;
    e(message,frequence);
}

int emetteur::getFrequence() {
    return this->frequence;
}
