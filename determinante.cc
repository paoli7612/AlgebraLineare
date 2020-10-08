#include <iostream>
#include "matrix.h"

using namespace std;

/*
    Crea una matrice casuale 4x4
    e ne stampa il determinante
*/

int main(int argc, char** argv){

    Matrice a(4, 4);
    a.random();

    a.stampa("A");
    cout << "Determinante di A: " << a.determinante() << endl;

    return 0;
}
