#include <iostream>
#include "complex.hpp"

using namespace std;

int main(int argc, char** argv){

    Complex a = new_complex(2, 3);
    Complex b = new_complex(6, -2);

    print_complex(a);
    cout << endl;
    print_complex(b);
    cout << endl;

    return 0;
}