#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void init(){ srand(time(NULL)); }

class Matrice {
    public:
        int r, c;
        float **val;
        Matrice(int righe=1, int colonne=1){
            cout << "NEW MATRICE" << endl;
            r = righe;
            c = colonne;
            val = new float*[righe];
            for (int y=0; y<righe; y++){
                val[y] = new float[colonne];
            }

        }

        Matrice copia(){
            Matrice m(r, c);
            for (int y=0; y<c; y++)
                for (int x=0; x<r; x++)
                    m.val[y][x] = val[y][x];
            return m;
        }

        void stampa(){
            for (int y=0; y<c; y++){
                for (int x=0; x<r; x++){
                    if (val[y][x] >= 0) cout << " ";
                    cout << val[y][x] << "\t";
                }
                cout << endl;
            }
            cout << endl;
        }

        void randomizza(){
            for (int y=0; y<c; y++)
                for (int x=0; x<r; x++)
                    val[y][x] = (rand()%20)-10;
            
        }

};

class Riga: Matrice {
    public:
        Riga(int c){
        }
};

class Colonna: Matrice {
    public:
        Colonna(int r){
        }
};

Matrice somma_matrici(Matrice m1, Matrice m2){
    Matrice m(m1.r, m1.c);
    for (int y=0; y<m1.c; y++)
        for (int x=0; x<m1.r; x++)
            m.val[y][x] = m1.val[y][x] + m2.val[y][x];
    return m;
}

Matrice prodotto_per_scalare(Matrice m, float s){
    Matrice p = m.copia();
    for (int y=0; y<m.c; y++)
        for (int x=0; x<m.r; x++)
            m.val[y][x] *= s;
    return p;
}