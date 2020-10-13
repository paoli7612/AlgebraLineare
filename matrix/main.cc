#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char** argv){

    init();

    Matrice a(4, 6);
    a.randomizza();
    a.stampa();

    return 0;
}
