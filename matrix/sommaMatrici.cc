#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){

    Matrice A(2, 2);
    Matrice B(2, 2);
    A.random();
    B.random();

    A.stampa("A");
    B.stampa("B");

    Matrice C = somma_matrici(A, B);
    C.stampa("A + B");

    return 0;
}
