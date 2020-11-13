#include <iostream>
#include "complex.hpp"

using namespace std;

int main(int argc, char** argv){

    Complex a = new_complex(2, 3);

    print_complex(a);
    cout << endl;
     
    print_complex(coniugato(a));
    cout << endl;

    print_complex(somma(a, coniugato(a)));
    cout << endl;

    print_complex(prodotto(a, coniugato(a)));
    cout << endl;

    cout << "radice di meno uno" << endl;
    Complex u = new_complex(1, 0);
    print_complex(u);
    cout << " * ";
    print_complex(u);
    cout << endl;
    print_complex(prodotto(u, u));

    return 0;
}