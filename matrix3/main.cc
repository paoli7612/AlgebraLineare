#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){

    init();

    Matrice a(6, 6);
    a.randomizza();
    a.stampa();

    float det = a.determinante();
    cout << "Determinante: " << det << endl;

    return 0;
}