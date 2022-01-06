#include <iostream>
using namespace std;
#include "Igrac.h"
#include "Tim.h"
#include "Privilegovani.h"
#include "Mec.h"
int main() {
    bool proba;
    Par<int> par_poenaa(0,0);
    Igrac *i1=new Igrac("Pavle", 600);
    Igrac *i2=new Igrac("Petar", 800);
    Igrac *i3=new Igrac("Anastasija", 1000);
    Igrac *i4=new Igrac("Djordje", 1200);
    Tim *t1=new Tim("Tim Domacin", 5);
    Tim *t2=new Tim("Tim Gost", 5);
    Privilegovani pt("Privilegovani tim 1", 5, 500);

    //i1->promeniVrednost(20);
    /*cout<<*i1<<endl;
    proba=(*i1==*i2);
    cout<<proba<<endl;
    t1.prikljuciIgraca(0, i2);
    t1.prikljuciIgraca(2, i1);
    t1.prikljuciIgraca(1, i3);
    cout<<t1<<endl;
    Igrac i_proba=t1.dohvIgraca(0);
    cout<<i_proba<<endl;
    double vrednost_tima=t1.dohvVrednostTima();
    cout<<vrednost_tima<<endl;
    t2.prikljuciIgraca(0, i2);
    t2.prikljuciIgraca(2, i1);
    t2.prikljuciIgraca(1, i3);
    proba=(t1==t2); //iz nekog razloga tim ima vise maks igraca?
    cout<<proba<<endl;
    pt.prikljuciPrivilegovanom(0, i2);
    pt.prikljuciPrivilegovanom(2, i1);
    pt.prikljuciPrivilegovanom(1, i3);
    cout<<pt;*/

    t1->prikljuciIgraca(0, i2);
    t1->prikljuciIgraca(2, i1);
    t1->prikljuciIgraca(1, i3);

    t2->prikljuciIgraca(0, i2);
    t2->prikljuciIgraca(2, i1);
    t2->prikljuciIgraca(1, i4);

    Mec m(t1, t2);

    m.odigrajMec();

    proba=m.proveriDaLiJeOdigranMec();

    cout<<proba;

    par_poenaa=m.dohvParPoena();

    cout<<par_poenaa;


    return 0;
}
