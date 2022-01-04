#include <iostream>
using namespace std;
#include "Igrac.h"
#include "Tim.h"
int main() {
    bool proba;
    Igrac *i1=new Igrac("Pavle", 600);
    Igrac *i2=new Igrac("Pavle", 600);
    Igrac *i3=new Igrac("Anastasija", 1000);
    Tim t1("Tim 1", 5);
    Tim t2("Tim 1", 5);
    //i1->promeniVrednost(20);
    cout<<*i1<<endl;
    proba=(i1==i2);
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
    //proba=(t1==t2); //iz nekog razloga tim ima vise maks igraca?
    //cout<<proba<<endl;

    return 0;
}
