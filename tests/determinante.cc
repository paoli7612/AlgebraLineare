#include <iostream>
#include "../matrix.hpp"

using namespace std;

int main(int argc, char** argv){
    init();

    Riga r;

    r_init(r, 5);
    r_randomizza(r);
    r_stampa(r);

    return 0;
}