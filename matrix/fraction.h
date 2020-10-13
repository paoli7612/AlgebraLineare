#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

void init(){ srand(time(NULL)); }

struct frac {
    int n = 0, d = 0;
    
    void stampa(){
        cout << n;
        if (d != 1) cout << "/" << d;
    }

    void random(){
        n = rand()%10 -5;
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
