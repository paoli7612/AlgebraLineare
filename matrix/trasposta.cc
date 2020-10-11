#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice A(3, 4);
    A.random();
    A.stampa("A");

    Matrice T = trasposta(A);
    T.stampa("Trasposta di A");
    return 0;
}