//
// Created by leanb on 12/11/2022.
//

#include "recepteur.h"

evt e;
message* recepteur::messageDebut= NULL;
message* recepteur::messageFin=NULL;

recepteur::recepteur(int nbFrequence) {
    e=&recepteur::ecoute;
    this->nombreFrequence=nbFrequence;
    this->listeFrequence= new int[nbFrequence];

    for(int i=0;i<nbFrequence;i++){
        int tempo;
        cout<<"Quel est la frequence du "<<i<<" eme abonnement ?"<<endl;
        cin>>tempo;
        this->listeFrequence[i]=tempo;
    }

}

recepteur::~recepteur(void)
{
    delete[] this->listeFrequence;
    std::cout << "Le tableau contenant toutes les frequences du poste "<< this <<" a bien été supprimé" << endl;
}

void recepteur::ecoute(string contenue, int frequence) {
    message* tempo= new ::message();
    tempo->message=contenue;
    tempo->frequence=frequence;
    tempo->suivant=NULL;


    if(messageDebut == NULL){
        messageFin=tempo;
        messageDebut=messageFin;
    }
    else{
        messageFin->suivant=tempo;
        messageFin=messageFin->suivant;

    }
}

void recepteur::lecture(int frequence){
    bool dansLaListe=false;
    for(int i = 0;i<this->nombreFrequence;i++){
        if(this->listeFrequence[i]==frequence){
            dansLaListe=true;
        }
    }
    if(dansLaListe == true){
        cout<<"Debut de la lecture des messages sur la frequence : "<< frequence<<endl;
        message* tempo= messageDebut;
        while(tempo != NULL){
            if(tempo->frequence==frequence){
                cout<<tempo->message<< " sur la frequence " << tempo->frequence<< endl;
            }
            tempo=tempo->suivant;
        }

    }
    else{
        cout<<"Vous ne pouvez pas ecouter une frequence qui n'est pas dans la liste"<<endl;
    }
}