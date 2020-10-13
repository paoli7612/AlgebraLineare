#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

void init(){ srand(time(NULL)); }

struct frac {
    int n = 0, d = 0;
    
    void stampa(){
        cout << (char)(' '*(n>=0)) << n;
        if (d != 1 && n != 0) cout << "/" << d;
    }

    void random(){
        n = rand()%10 - 5;
        d = rand()%5 + 1;
        semplifica();
    }

    void semplifica(){
        for (int i=n; i>1; i--)
            if ((n % i == 0) && (d % i == 0)){
                n/=i;
                d/=i;
            }
    }
};

class Matrice {
    public:
        vector<vector<frac>> val; 
        int r, c;

        Matrice(int righe, int colonne){
            r = righe;
            c = colonne;
            val.resize(r);
            for (int y=0; y<r; y++){
                val[y].resize(c);
                for (int x=0; x<c; x++){
                    val[y][x].n = 1;
                    val[y][x].d = 1;
                }
            }
        }

        void stampa(){
            for (int y=0; y<r; y++){
                for (int x=0; x<c; x++){
                    val[y][x].stampa();
                    cout << "\t";
                }
                cout << endl;
            }
        }

        void randomizza(){
            for (int y=0; y<r; y++)
                for (int x=0; x<c; x++)
                    val[y][x].random();
        }
};


Matrice somma_matrici(Matrice m1, Matrice m2){
    Matrice m(m1.r, m1.c);

    return m;
}