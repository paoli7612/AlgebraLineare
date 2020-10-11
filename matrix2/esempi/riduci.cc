#include <iostream>
#include "../matrix.h"

using namespace std;

int main(int argc, char** argv){

    init_random();

    Matrice a = nuova_matrice(4, 4);
    randomizza(a);
    a.val[1][0] = 0;
    a.val[2][0] = 0;
    a.val[2][1] = 0;
    a.val[3][0] = 0;
    a.val[3][1] = 0;
    a.val[3][2] = 0;
    stampa_matrice(a);


    for (int i=0; i<4; i++)
        riduci_riga(a, i);

    stampa_matrice(a);

    return 0;
}
