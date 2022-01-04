

#ifndef MAIN_CPP_TIM_H
#define MAIN_CPP_TIM_H
#include "Igrac.h"

class Tim {
private:

    string naziv;
    int maks_broj_igraca, broj_igraca=0;
    double vrednost_tima;
    Igrac** niz;
public:

    Tim(string name, int max_players);

    Tim(const Tim& t);
    Tim(const Tim&& t);
    ~Tim();

    void prikljuciIgraca(int i, Igrac* player){
        niz[i]=player;
        broj_igraca++;
    }

    int getBrojIgraca() const;

    Igrac dohvIgraca(int i){
        Igrac player=*niz[i];
        return player;
    }

    double dohvVrednostTima(){
        double temp_vrednost;
        for(int i=0; i<broj_igraca; i++){
            temp_vrednost=niz[i]->getVrednost();
        }
        vrednost_tima=temp_vrednost/broj_igraca;
        return vrednost_tima;
    }

    bool operator==(Tim t){
        int broj_jednakih=0;
        if(this->naziv==t.naziv && this->maks_broj_igraca==t.maks_broj_igraca){
            for (int i=0; i<maks_broj_igraca; i++){
                if(this->niz[i] == t.niz[i]){
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


};


#endif //MAIN_CPP_TIM_H
