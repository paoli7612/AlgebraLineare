#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){

    Matrice A(3, 2);
    A.random();
    Matrice B(2, 3);
    B.random();

    A.stampa("A");
    B.stampa("B");

    Matrice C = prodotto_matrici(A, B);
    C.stampa("AxB");

    Matrice D = prodotto_matrici(B, A);
    D.stampa("BxA");


    return 0;
}