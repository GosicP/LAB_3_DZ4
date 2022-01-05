
#ifndef MAIN_CPP_MEC_H
#define MAIN_CPP_MEC_H
#include "Par.h"

class Mec {

private:

    Par<Tim*> par_timova;
    enum stanje{POBEDA_DOMACIN, NERESENO, POBEDA_GOST};
    stanje ishod;

public:

    Mec(Tim* tim_domacin, Tim* tim_gost){
        par_timova.postaviPod1(tim_domacin);
        par_timova.postaviPod2(tim_gost);
    }

};


#endif //MAIN_CPP_MEC_H
