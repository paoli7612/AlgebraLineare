#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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

        float complemento_algebrico(int riga, int colonna){
            Matrice m(r-1, c-1);
            
            for (int y=0; y<r-1; y++)
                for (int x=0; x<c-1; x++){
                    int a = y >= riga, b = x >= colonna;
                    m.val[y][x] = val[y+a][x+b];
                }

            return m.determinante() * pow(-1, riga+colonna);
        }

        float sarrus(){
            float det = 0;

            for (int i=0; i<3; i++){
                int u = (i+1)%3, d = (u+1)%3;
                det += (val[0][i]*val[1][u]*val[2][d]);
                det -= (val[2][i]*val[1][u]*val[0][d]);
            }

            return det;
        }

        float laplace(){
            float det = 0;

            // per la prima riga
            for (int i=0; i<c; i++){
                det += val[0][i]*complemento_algebrico(0,i);
            }

            return det;
        }

        float determinante(){
            if (c != r)
                throw "Matrice non quadrata";
            
            if (r == 1)
                return val[0][0];
            else if (r == 2)
                return val[0][0]*val[1][1] - val[0][1]*val[1][0];
            else if (r == 3)
                return sarrus();
            else
                return laplace();
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