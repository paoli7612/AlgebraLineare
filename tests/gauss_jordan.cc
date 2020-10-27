#include <iostream>
#include "../matrix.hpp"

using namespace std;

int main(int argc, char** argv){
    init();

    Matrice a;

    int r, c;
    if (argc==3){
        r = argv[1][0] - 48;
        c = argv[2][0] - 48;
    } else {
        cout << "Numero righe: "; cin >> r;
        cout << "Numero colonne: "; cin >> c;
    }

    m_init(a, r, c);
    m_randomizza(a);
    m_stampa(a);

    m_gauss(a);

    return 0;
}
