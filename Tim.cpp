//
// Created by Pavle on 4.1.2022..
//

#include "Tim.h"

Tim::Tim(const Tim &t) {
    niz=new Igrac*[t.maks_broj_igraca];
    for (int i=0; i<maks_broj_igraca; i++){
        niz[i]=t.niz[i];
    }
}

Tim::Tim(const Tim &&t)  {
    niz=t.niz;
    maks_broj_igraca=t.maks_broj_igraca;
}

Tim::~Tim() {
    delete[] niz;
}

Tim::Tim(string name, int max_players) {
    niz=new Igrac*[max_players];
    naziv=name;
    maks_broj_igraca=max_players;
}

int Tim::getBrojIgraca() const {
    return broj_igraca;
}

bool Tim::operator==(Tim t) {
    int broj_jednakih=0;
    if(this->naziv==t.naziv && this->maks_broj_igraca==t.maks_broj_igraca){
        for (int i=0; i<maks_broj_igraca; i++){
            if(*this->niz[i] == *t.niz[i]){
                broj_jednakih++;
            }
        }
        if(broj_jednakih==maks_broj_igraca){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

double Tim::dohvVrednostTima() {
    double temp_vrednost=0;
    for(int i=0; i<broj_igraca; i++){
        temp_vrednost=temp_vrednost+niz[i]->getVrednost();
    }
    vrednost_tima=temp_vrednost/broj_igraca;
    return vrednost_tima;
}
