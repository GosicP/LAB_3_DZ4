

#ifndef MAIN_CPP_TIM_H
#define MAIN_CPP_TIM_H
#include "Igrac.h"

class Tim {
protected:

    string naziv;
    int maks_broj_igraca, broj_igraca=0;
    double vrednost_tima;
    Igrac** niz;

    virtual void pisi(ostream &os){
        os<<naziv<<"[";
        for (int i=0; i<broj_igraca; i++){
            if(i!=broj_igraca-1){
                os<<*niz[i]<<",";
            }else{
                os<<*niz[i];
            }
        }
        os<<"]";
    }

public:

    Tim(string name, int max_players);

    Tim(const Tim& t);
    Tim(const Tim&& t);
    ~Tim();

    void prikljuciIgraca(int i, Igrac *player){
        niz[i]=player;
        broj_igraca++;
    }

    int getBrojIgraca() const;

    Igrac dohvIgraca(int i){
        Igrac player=*niz[i];
        return player;
    }

    double dohvVrednostTima();

    bool operator==(Tim& t);

    friend ostream& operator << (ostream& os, Tim& t){
        t.pisi(os);
        return os;
    }


};


#endif //MAIN_CPP_TIM_H
