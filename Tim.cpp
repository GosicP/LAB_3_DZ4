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
