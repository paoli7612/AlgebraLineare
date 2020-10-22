#include <iostream>

using namespace std;

struct Frac {
    int n;
    int d=1;
};

//____Frazione____
//void f_init(Frac&):
void f_stampa(Frac);
void f_randomizza(Frac&);

Frac f_somma(Frac, Frac);
void f_moltiplica(Frac&, Frac);


Frac f_prodotto(Frac, Frac);

void f_stampa(Frac f){
    if (f.n == 0) cout << 0;
    else {
        cout << f.n;
        if (f.d != 1) cout << "/" << f.d;
    }
}

void f_randomizza(Frac &f){
    f.n = rand()%10;
}

Frac f_somma(Frac f1, Frac f2){
    Frac f;

    if (f1.d == f2.d)
        f.n = f1.n + f2.n;

    return f;
}

Frac f_meno(Frac f){
    f.n *= -1;
    return f;
}

void f_moltiplica(Frac &f, Frac s){
    f.n *= s.n;
    f.d *= s.d;
}

Frac f_prodotto(Frac f1, Frac f2){
    Frac f;
    f.n = f1.n * f2.n;
    f.d = f1.d * f2.d;
    return f;
}