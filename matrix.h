#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

class Matrice;
Matrice somma(Matrice, Matrice);
int laplace(Matrice*, int);
int sarrus(Matrice*);

int mualla(int n){
    if (n%2 == 0) return 1;
    else return -1;
}

class Matrice {
    public:
        int r, c;
        int **mat;
        bool is_quadrata(){
            return r == c;
        }

        Matrice(int righe, int colonne){
            srand(time(NULL));
            r = righe;
            c = colonne;
            mat = new int*[r];
            for (int y=0; y<r; y++){
                mat[y] = new int[c];
            }
        }

        void stampa(){
            cout << "Matrice (" << r << "x" << c << ")" << endl;
            for (int y=0; y<r; y++){
                for (int x=0; x<c; x++)
                    cout << mat[y][x] << "\t";
                cout << endl;
            }
        }

        void random(){
            for (int y=0; y<r; y++)
                for (int x=0; x<c; x++)
                    mat[y][x] = rand()%20 - 10;
        }

        int determinante(){
            if (!is_quadrata())
                throw "Matrice non quadrata";
            else if (r == 1)
                return mat[0][0];
            else if (r == 2)
                return (mat[0][0]*mat[1][1]) - (mat[0][1]*mat[1][0]);
            else if(r == 3)
                return sarrus(this);
            else {
                return laplace(this, r);
            }
        }

        int complemento_algebrico(int i, int j){
            if (!is_quadrata())
                throw "Matrice non quadrata";
            int n = r-1;
            Matrice m(n, n);
            for (int y=0; y<n; y++)
                for (int x=0; x<n; x++){
                    int a, b;
                    if (i <= y) a=1; else a=0;
                    if (j <= x) b=1; else b=0;
                    m.mat[y][x] = mat[y+a][x+b];
                }
            return m.determinante()*mualla(2+i);
        }
};



int laplace(Matrice* m, int n){
    int det = 0;
    for (int i=0; i<n; i++){
        det += m->mat[i][0]*(m->complemento_algebrico(i,0));
    }
    return det;
}

int sarrus(Matrice* m){
    int det = 0;
    for (int i=0; i<3; i++){
        int u = (i+1)%3, d = (i+2)%3, c = (2-i)%3;
        det += m->mat[0][i]*m->mat[1][u]*m->mat[2][d];
        det -= m->mat[2][i]*m->mat[1][u]*m->mat[0][d];
    }
    cout << endl << det << endl;
    return det;
}
