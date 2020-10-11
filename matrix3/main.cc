#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){

    int q = 2;

    Matrice a(q, q), b(q, q);
    a.randomizza();
    b.randomizza();
    a.stampa();
    b.stampa();

    Matrice c = somma_matrici(a, b);
    c.stampa();

    return 0;
}