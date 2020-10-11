#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice a(2, 2);
    a.random();

    a.stampa("A");
    a.per(3);
    a.stampa("A*3");
    

    return 0;
}
