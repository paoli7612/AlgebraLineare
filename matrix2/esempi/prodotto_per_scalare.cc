#include <iostream>
#include "../matrix.h"

using namespace std;

int main(int argc, char** argv){
    Matrice a = nuova_matrice(2, 3);
    randomizza(a);
    stampa_matrice(a);

    prodotto_per_scalare(a, 3);
    stampa_matrice(a);

    return 0;
}
