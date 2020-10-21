#include <iostream>
#include "../matrix.hpp"

using namespace std;

/*
    Chiede all'utente le dimensioni di una matrice
    Genera random la matrica con quelle dimensioni e la mostra
    Genera uno scalare random e lo stampa
    Moltiplica la matrice per quel numero e la stampa
*/

int main(int argc, char** argv){
    init();

    Matrice a;

    int r, c;

    cout << "Numero righe: "; cin >> r;
    cout << "Numero colonne: "; cin >> c;

    m_init(a, r, c);
    m_randomizza(a);
    m_stampa(a);

    int scalare = rand()%20 - 10;
    cout << "Moltiplico la matrice per " << scalare << endl;
    
    m_moltiplica(a, scalare);
    m_stampa(a);

    return 0;
}