#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice a(3, 3);
    a.random();
    a.stampa("A");
    Matrice g = a_gradini(a);
    g.stampa("A a gradini");


    return 0;
}
