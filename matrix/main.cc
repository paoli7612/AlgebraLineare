#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char** argv){

    init();

    Matrice a(2, 2);
    a.randomizza();
    a.stampa();

    Matrice b(2, 2);
    b.randomizza();
    b.stampa();

    Matrice c = somma_matrici(a, b);
    c.stampa();

    return 0;
}
