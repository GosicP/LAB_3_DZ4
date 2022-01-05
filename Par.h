
#ifndef MAIN_CPP_PAR_H
#define MAIN_CPP_PAR_H
#include "Tim.h"


template<typename T>
class Par {
protected:

    struct skup{
        T* pod1, *pod2;
    };
    skup s;

    virtual void pisi(ostream& os){
        os<<"["<<s.pod1<<"-"<<s.pod2<<"]";
    }

public:

    T* dohvPod1(){
        return s.pod1;
    }

    T* dohvPod2(){
        return s.pod2;
    }

    void postaviPod1(T& podatak){
        s.pod1=podatak;
    }

    void postaviPod2(T& podatak){
        s.pod2=podatak;
    }

    bool operator == (Par& par2){
        if(this->dohvPod1()==par2.dohvPod1() && this->dohvPod2()==par2.dohvPod2()){
            return true;
        }else{
            return false;
        }
    }

    friend ostream& operator << (ostream &os, Par& p){
        p.pisi(os);
        return os;
    }


};


#endif //MAIN_CPP_PAR_H
