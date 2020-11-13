#include <iostream>
#include "../matrix.hpp"

using namespace std;

int main(int argc, char** argv){
    init();

    Frac a, b;

    f_randomizza(a);    
    f_randomizza(b);

    f_stampa(a); cout << endl;    
    f_stampa(b); cout << endl;

    return 0;
}
