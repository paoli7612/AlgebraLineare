#include <iostream>

using namespace std;

struct Frac {
        int n = 0;
        int d = 0;
};

void frac_stampa(Frac f){
    cout << f.n;
    if (f.d)
        cout << "/" << f.d;
    cout << " ";
}

class Matrice {
    public:
        int r, c;
        Frac **val;
        Matrice(int righe=1, int colonne=1){
            r = righe;
            c = colonne;
            val = new Frac*[righe];
            for (int y=0; y<righe; y++){
                val[y] = new Frac[colonne];
            }
        }

        void stampa(){
            for (int y=0; y<r; y++){
                for (int x=0; x<c; x++)
                    frac_stampa(val[y][x]);
                cout << endl;
            }
        }
};
