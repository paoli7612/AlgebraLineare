#include <iostream>
#include "matrix.h"

#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv){
    srand(time(NULL));
    int n = rand()%10 - 5;

    Matrice a(4, 2);
    a.randomizza();
    a.stampa();

    cout << "Moltiplico la radice per " << n << endl;
    a = prodotto_per_scalare(a, n);
    a.stampa();

    return 0;
}