#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, char** argv){

    init_random();

    Matrice a = nuova_matrice(3, 3);
    randomizza(a);
    stampa_matrice(a);

    for (int i=0; i<3; i++){
        Matrice r = riga(a, i);
        r = prodotto_per_scalare(r, 1/r.val[0][0]);
        inserisci_riga(a, r, i);
    }
    stampa_matrice(a);

    return 0;
}
