#include <iostream>
#include "matrix.hpp"

using namespace std;

int main(int argc, char** argv){

    init();

    Matrice m1, m2;
    m_init(m1, 2, 3);
    m_init(m2, 3, 2);
    m_randomizza(m1);
    m_randomizza(m2);
    m_stampa(m1);
    cout << endl;

    m_stampa(m2);
    cout << endl;

    Matrice m3 = prodotto_matrici(m1, m2);
    m_stampa(m3);


    return 0;
}