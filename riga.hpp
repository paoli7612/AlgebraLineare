#include <iostream>
#include "frazione.hpp"

using namespace std;

struct Riga {
    int n;
    Frac* v;
};

void r_init(Riga&, int);
void r_randomizza(Riga&);
void r_stampa(Riga);

void r_moltiplica(Riga&, Frac);
Riga r_somma(Riga&, Riga);

Riga r_prodotto(Riga, Riga);

void r_init(Riga &r, int n){
    r.n = n;
    r.v = new Frac[n];
}

void r_stampa(Riga r){
    for (int n=0; n<r.n; n++){
        f_stampa(r.v[n]);
        cout << "\t";
    }
    cout << endl;
}

void r_randomizza(Riga &r){
    for (int n=0; n<r.n; n++)
        f_randomizza(r.v[n]);
}

void r_moltiplica(Riga &r, Frac s){
    for (int n=0; n<r.n; n++)
        f_moltiplica(r.v[n], s);
}