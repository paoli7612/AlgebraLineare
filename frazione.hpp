#include <iostream>
#include <math.h>

using namespace std;

struct Frac {
    int n = 0;
    int d = 1;
};

//____Frazione____
//void f_init(Frac&):
void f_stampa(Frac);
void f_randomizza(Frac&);

Frac f_somma(Frac, Frac);
void f_moltiplica(Frac&, Frac);
void f_moltiplica(Frac&, int);
int mcm(Frac, Frac);
void f_semplifica(Frac&);

Frac f_menouno(Frac);
Frac f_prodotto(Frac, Frac);

void f_semplifica(Frac &f){
    for (int i=f.n; i>1; i--)
        if ((f.n%i == 0) && (f.d%i == 0)){
            f.n/=i;
            f.d/=i;
            break;
        }
}

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

    int m = mcm(f1, f2);
    f_moltiplica(f1, m);
    f_moltiplica(f2, m); 

    if (f1.d == f2.d)
        f.n = f1.n + f2.n;
    f_semplifica(f);

    return f;
}

int mcm(Frac f1, Frac f2){
    return f1.d * f2.d;
}

Frac f_somma(Frac f1, Frac f2, Frac f3){
    return f_somma(f1, f_somma(f2, f3));
}

Frac f_meno(Frac f){
    f.n *= -1;
    return f;
}

void f_moltiplica(Frac &f, Frac s){
    f.n *= s.n;
    f.d *= s.d;
}

void f_moltiplica(Frac &f, int s){
    f.n *= s;
}

Frac f_prodotto(Frac f1, Frac f2){
    Frac f;
    f.n = f1.n * f2.n;
    f.d = f1.d * f2.d;
    return f;
}

Frac f_prodotto(Frac f1, Frac f2, Frac f3){
    Frac f;
    f.n = f1.n * f2.n * f3.n;
    f.d = f1.d * f2.d * f3.d;
    return f;
}

Frac f_divisione(Frac &f1, Frac &f2){
    Frac f = f_prodotto(f1, f_menouno(f2));
    return f;
}

Frac f_mualla(int n){
    Frac f;
    if (n%2 == 0)
        f.n = 1;
    else
        f.n = -1;
    return f;
}

Frac f_menouno(Frac f){
    if (f.n == 0) throw "Division by 0";
    Frac d;
    d.n = f.d;
    d.d = f.n;
    return d;
}