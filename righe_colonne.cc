#include <iostream>
#include "matrix.h"

using namespace std;

int main(){

    Matrice a(3, 3);
    a.random();
    a.stampa("A");
    Matrice r1 = a.riga(0);
    r1.stampa("A riga 1");

    Matrice c2 = a.colonna(1);
    c2.stampa("A colonna 2");


    return 0;
}
