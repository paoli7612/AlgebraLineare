#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "matrice.hpp"

using namespace std;

void init(){
    srand(time(NULL));

    int r, c;
    cout << "Righe: "; cin >> r;
    cout << "Colonne: "; cin >> c;

    Matrice m;
    m_init(m, r, c);
    m_randomizza(m);
    m_stampa(m);

    return 0;

}
