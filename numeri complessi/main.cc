#include <iostream>
#include "complex.hpp"

using namespace std;

int main(int argc, char** argv){

    Complex a = new_complex(2, 3);

    stampa(a);
    cout << endl;
     
    stampa(coniugato(a));
    cout << endl;

    stampa(somma(a, coniugato(a)));
    cout << endl;

    stampa(prodotto(a, coniugato(a)));
    cout << endl;

    cout << "radice di meno uno" << endl;
    Complex u = new_complex(1, 0);
    stampa(u);
    cout << " * ";
    stampa(u);
    cout << endl;
    stampa(prodotto(u, u));
    cout << endl;

    return 0;
}