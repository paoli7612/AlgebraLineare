#include <iostream>
#include "matrix.hpp"

using namespace std;

int main(int argc, char** argv){

    init();

    Matrice m;
    m_init(m, 3, 3);
    m_randomizza(m);
    m_stampa(m);

    cout << endl;

    Matrice m2 = m_somma(m, m);
    m_stampa(m2);

    return 0;
}