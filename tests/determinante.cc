#include <iostream>
#include "../matrix.hpp"

using namespace std;

int main(int argc, char** argv){
    init();

    Matrice a;

    int r, c;

    cout << "Numero righe: "; cin >> r;
    cout << "Numero colonne: "; cin >> c;

    m_init(a, r, c);
    m_randomizza(a);
    m_stampa(a);

    if (r == c){
        cout << "Determinante: ";
        Frac det = m_determinante(a);
        f_stampa(det);
    } else {
        cout << "La matrice non è quadrata";
    }
    
    cout << endl;

    return 0;
}