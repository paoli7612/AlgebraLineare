#include <iostream>
#include <vector>

using namespace std;

struct frac {
    int n = 0, d = 0;
    
    void stampa(){
        cout << n;
        if (d != 1) cout << "/" << d;
    }
};

class Matrice {
    public:
        vector<vector<frac>> val; 
        int r, c;

        Matrice(int righe, int colonne){
            r = righe;
            c = colonne;
            val.resize(c);
            for (int y=0; y<r; y++){
                val[y].resize(r);
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
};
