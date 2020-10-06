#include "matrix.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    Matrice m(4, 4);
    m.random();
    m.stampa();
    cout << m.determinante();
    return 0;
}
