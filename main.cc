#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice a(3, 3);
    a.random();
    a.stampa("A");

    cout << "determinante = " << a.determinante() << endl;

    Matrice b = a.trasposta();
    b.stampa("B");

    Matrice c = prodotto_matrici(a, b);
    c.stampa("AxB");
    return 0;
}
