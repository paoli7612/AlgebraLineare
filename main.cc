#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice a(2, 3);
    a.random();
    a.stampa("A");

    // cout << "determinante = " << a.determinante() << endl;

    Matrice b(3, 2);
    b.random();
    b.stampa("B");

    Matrice c = prodotto_matrici(a, b);
    c.stampa("AxB");
    return 0;
}
