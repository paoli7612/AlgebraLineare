#include <iostream>
#include "../matrix.hpp"

using namespace std;

int main(int argc, char** argv){
    cout << argc << endl;
    init();

    Matrice a;

    int r, c;

    cout << "Numero righe: "; cin >> r;
    cout << "Numero colonne: "; cin >> c;

    m_init(a, r, c);
    m_randomizza(a);
    m_stampa(a);

    return 0;
}
