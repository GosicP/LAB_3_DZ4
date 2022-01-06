//
// Created by Pavle on 5.1.2022..
//

#include "Mec.h"

void Mec::odigrajMec() {
    Tim *tim_domacin=this->par_timova.dohvPod1();
    Tim *tim_gost=this->par_timova.dohvPod2();
    int poeni_domaci=this->par_poena.dohvPod1();
    int poeni_gosti=this->par_poena.dohvPod2();

    if(tim_domacin->dohvVrednostTima()>tim_gost->dohvVrednostTima()){
        ishod=POBEDA_DOMACIN;
        poeni_domaci=3;
        poeni_gosti=0;
        this->par_poena.postaviPod1(poeni_domaci);
        this->par_poena.postaviPod2(poeni_gosti);

        for(int i=0; i<tim_domacin->getBrojIgraca(); i++){
            tim_domacin->dohvIgraca(i).promeniVrednost(10);
        }

        for(int i=0; i<tim_gost->getBrojIgraca(); i++){
            tim_gost->dohvIgraca(i).promeniVrednost(-10);
        }
    }

    if(tim_domacin->dohvVrednostTima()<tim_gost->dohvVrednostTima()){
        ishod=POBEDA_GOST;

        poeni_gosti=3;
        poeni_domaci=0;
        this->par_poena.postaviPod2(poeni_gosti);
        this->par_poena.postaviPod1(poeni_domaci);

        for(int i=0; i<tim_domacin->getBrojIgraca(); i++){
            tim_domacin->dohvIgraca(i).promeniVrednost(-10);
        }

        for(int i=0; i<tim_gost->getBrojIgraca(); i++){
            tim_gost->dohvIgraca(i).promeniVrednost(10);
        }
    }

    if(tim_domacin->dohvVrednostTima()==tim_gost->dohvVrednostTima()){
        ishod=NERESENO;
        poeni_domaci=1;
        poeni_gosti=1;

        this->par_poena.postaviPod1(poeni_domaci);
        this->par_poena.postaviPod2(poeni_gosti);

    }

}
