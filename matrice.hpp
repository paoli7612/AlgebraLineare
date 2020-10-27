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

//Matrice m_moltiplica(Matrice&, Frac);
Matrice m_somma(Matrice, Matrice);

Matrice m_prodotto(Matrice, Matrice);
Frac m_determinante(Matrice);
Frac m_laplace(Matrice);
Frac m_complemento_algebrico(Matrice, int, int);

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

Frac m_determinante(Matrice m){
    // solo m quadrate
    Frac f;

    if (m.r == 1)
        f = m.v[0][0];
    else if (m.r == 2){
        f = f_somma(f_prodotto(m.v[0][0], m.v[1][1]), f_meno(f_prodotto(m.v[0][1], m.v[1][0])));
    //} else if (m.r == 3){ // SARRUS
    } else {
        f = m_laplace(m);
    }

    return f;
}

Frac m_laplace(Matrice m){
    Frac d;

    // Usiamo la prima riga

    for (int i=0; i<m.c; i++){
        d = f_somma(d, f_prodotto(m.v[0][i], m_complemento_algebrico(m, 0, i)));
    }

    return d;
}

Frac m_complemento_algebrico(Matrice m, int r, int c){
    Matrice m1;
    m_init(m1, m.r-1, m.c-1);

    for (int y=0; y<m1.r; y++)
        for (int x=0; x<m1.c; x++){
            int x1 = x + 1*(x>=c);
            int y1 = y + 1*(y>=r);
            m1.v[y][x] = m.v[y1][x1];
        }

    return f_prodotto(m_determinante(m1), f_mualla(r+c));
}
