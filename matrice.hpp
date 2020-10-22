#include <iostream>
#include "riga.hpp"

using namespace std;

struct Matrice {
    int r, c;
    Frac** v;
};

void m_init(Matrice&, int, int);
void m_randomizza(Matrice&);
void m_stampa(Matrice);

Matrice m_moltiplica(Matrice, Frac);
Matrice m_somma(Matrice, Matrice);

Matrice m_prodotto(Matrice, Matrice);

void m_init(Matrice &m, int r, int c){
    m.r = r;
    m.c = c;
    m.v = new Frac*[r];
    for (int y=0; y<r; y++)
        m.v[y] = new Frac[c];
}

void m_randomizza(Matrice &m){
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            f_randomizza(m.v[y][x]);
}

void m_stampa(Matrice m){
    for (int y=0; y<m.r; y++){
        for (int x=0; x<m.c; x++){
            f_stampa(m.v[y][x]);
            cout << "\t";    
        }
        cout << endl;
    }
    cout << endl;
}

void m_moltiplica(Matrice &m, Frac s){
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            f_moltiplica(m.v[y][x], s);
}

Matrice m_somma(Matrice m1, Matrice m2){
    Matrice m;
    m_init(m, m1.r, m1.c);
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            m.v[y][x] = f_somma(m1.v[y][x], m2.v[y][x]);
    return m;
}

Matrice m_prodotto(Matrice m1, Matrice m2){
    Matrice m;
    m_init(m, m1.r, m2.c);
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            for (int p=0; p<m1.c; p++)
                m.v[y][x] = f_somma(m.v[y][x], f_prodotto(m1.v[y][p], m2.v[p][x]));
        

    return m;
}


