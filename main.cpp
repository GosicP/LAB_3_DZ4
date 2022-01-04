#include <iostream>
using namespace std;
#include "Igrac.h"
int main() {
    bool proba;
    Igrac i1("Pavle", 600);
    Igrac i2("Pavle", 600);
    i1.promeniVrednost(20);
    cout<<i1<<endl;
    proba=(i1==i2);
    cout<<proba;
    return 0;
}
