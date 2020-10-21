#include <iostream>
#include "matrix.hpp"

using namespace std;

int main(int argc, char** argv){

    init();

    Matrice m;
    m_init(m, 3, 3);
    m_randomizza(m);
    m_stampa(m);

    return 0;
}