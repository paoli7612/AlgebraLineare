#include <iostream>
#include "../matrix/fraction.h"

using namespace std;

int main(){

    init();

    frac f;
    f.random();
    f.stampa();

    cout << endl;

    return 0;
}