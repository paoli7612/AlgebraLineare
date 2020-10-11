#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

struct Matrice {float **val; int r, c; };
void init_random(){ srand(time(NULL)); }

// Matrix _____________________________________
Matrice nuova_matrice(int, int);
Matrice somma_matrici(Matrice, Matrice);
Matrice prodotto_per_scalare(Matrice, float);
void inserisci_riga(Matrice, Matrice, int);
void stampa_matrice(Matrice);
void randomizza(Matrice&);
void riduci_riga(Matrice&, int);
float pivot(Matrice m);

// ___________________________________________

Matrice riga(Matrice, int);
Matrice colonna(Matrice, int);

Matrice nuova_matrice(int righe, int colonne){
    // new matrice
    Matrice m;
    m.r = righe;
    m.c = colonne;

    // init matrice.val
    m.val = new float*[righe];
    for (int r=0; r<righe; r++)
        m.val[r] = new float[colonne];

    return m;
}

void stampa_matrice(Matrice m){
    cout << "Matrice " << m.r << "x" << m.c << endl;
    for (int y=0; y<m.r; y++){
        for (int x=0; x<m.c; x++)
            cout << m.val[y][x] << "  ";
        cout << endl;
    }
}

Matrice somma_matrici(Matrice m1, Matrice m2){
    Matrice m = nuova_matrice(m1.r, m1.c);
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            m.val[y][x] = m1.val[y][x] + m2.val[y][x];
    return m;
}

Matrice prodotto_per_scalare(Matrice m, float s){
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++){
            m.val[y][x] *= s;
            if (m.val[y][x] == -0)
                m.val[y][x] = 0;
        }
    return m;
}

void randomizza(Matrice &m){
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            m.val[y][x] = (rand()%20)-10;
}

Matrice riga(Matrice m, int riga){
    Matrice r = nuova_matrice(1, m.c);

    for (int p=0; p<m.c; p++)
        r.val[0][p] = m.val[riga][p];

    return r;
}

Matrice colonna(Matrice m, int colonna){
    Matrice c = nuova_matrice(m.r, 1);

    for (int p=0; p<m.r; p++)
        c.val[p][0] = m.val[p][colonna];

    return c;
}

void inserisci_riga(Matrice m, Matrice r, int riga){
    m.val[riga] = r.val[0];
}

void riduci_riga(Matrice &m, int r){
    Matrice v = riga(m, r);
    v = prodotto_per_scalare(v, 1/pivot(v));
    inserisci_riga(m, v, r);
}

float pivot(Matrice m){
    for (int i=0; i<m.c; i++)
        if (m.val[0][i] != 0)
            return m.val[0][i];
    return 0;
}
