#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void init(){
    srand(time(NULL));
}

struct Frac {
    int n;
    int d=1;
};

struct Matrice {
    int r, c;
    Frac** v;
};

void m_init(Matrice &m, int r, int c){
    m.r = r;
    m.c = c;
    m.v = new Frac*[r];
    for (int y=0; y<r; y++)
        m.v[y] = new Frac[c];
}

void f_stampa(Frac);
void f_randomizza(Frac&);
Frac f_somma(Frac, Frac);
Frac f_prodotto(Frac, int);

void m_init(Matrice&, int, int);
void m_randomizza(Matrice&);
void m_stampa(Matrice);
Matrice m_somma(Matrice, Matrice);
Matrice m_prodotto(Matrice, int);


void f_stampa(Frac f){
    if (f.n == 0) cout << 0;
    else {
        cout << f.n << "/" << f.d;
        if (f.d != 1) cout << "/" << f.d;
    }
}

void m_stampa(Matrice m){
    for (int y=0; y<m.r; y++){
        for (int x=0; x<m.c; x++){
            f_stampa(m.v[y][x]);
            cout << "\t";    
        }
        cout << endl;
    }
}

Frac f_somma(Frac f1, Frac f2){
    Frac f;
    f.n = f1.n + f2.n;
    return f;
}

void f_randomizza(Frac &f){
    f.n = rand()%10;
}

void m_randomizza(Matrice &m){
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            f_randomizza(m.v[y][x]);
}

Matrice m_somma(Matrice m1, Matrice m2){
    Matrice m;
    m_init(m, m1.r, m1.c);
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            m.v[y][x] = f_somma(m1.v[y][x], m2.v[y][x]);
    return m;
}



