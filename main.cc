#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice m(3, 3);
    m.random();
    m.stampa();
    Matrice c = m.trasposta();
    c.stampa();
    return 0;
}
