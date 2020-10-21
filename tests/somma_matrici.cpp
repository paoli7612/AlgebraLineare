#include <iostream>
#include "../matrix.hpp"

using namespace std;

/*
    Chiede all'utente le dimensioni delle matrici
    Genera random 2 matrici con quelle dimensioni e le mostra
    Calcola la matrice somma e la mostra
*/

int main(int argc, char** argv){
    init();

    Matrice a, b;

    int r, c;

    cout << "Numero righe: "; cin >> r;
    cout << "Numero colonne: "; cin >> c;

    m_init(a, r, c);
    m_randomizza(a);
    m_init(b, r, c);
    m_randomizza(b);

    m_stampa(a);
    m_stampa(b);

    Matrice s = m_somma(a, b);
    m_stampa(s);

    return 0;
}