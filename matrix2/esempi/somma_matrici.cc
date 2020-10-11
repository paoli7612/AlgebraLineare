#include <iostream>
#include "../matrix.h"

using namespace std;

int main(int argc, char** argv){

    Matrice a = nuova_matrice(3, 3);
    Matrice b = nuova_matrice(3, 3);
    randomizza(a);
    randomizza(b);
    stampa_matrice(a);
    stampa_matrice(b);

    stampa_matrice(somma_matrici(a, b));

    return 0;
}
