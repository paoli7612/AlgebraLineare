#include <iostream>
#include "../matrix/fraction.h"

using namespace std;

int main(){

    init();

    frac a;
    a.random();
    a.stampa();

    frac b;
    b.random();
    cout << endl;
    b.stampa();
    cout << endl;

    frac c = a.piu(b);
    c.stampa();

    cout << endl;
    return 0;
}