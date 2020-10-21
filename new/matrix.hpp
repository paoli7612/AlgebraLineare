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

void m_randomizza(Matrice &m){
    for (int y=0; y<m.r; y++)
        for (int x=0; x<m.c; x++)
            m.v[y][x].n = rand()%10;
}

