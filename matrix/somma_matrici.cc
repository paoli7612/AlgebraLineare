#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){

    Matrice a(4, 3);
    Matrice b(4, 3);
    a.randomizza();
    b.randomizza();
    a.stampa();
    b.stampa();


    Matrice c = somma_matrici(a, b);
    c.stampa();

    return 0;
}