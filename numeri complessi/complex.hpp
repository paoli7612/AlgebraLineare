#include <iostream>

using namespace std;

struct Complex {
    float real = 0;
    float immaginary = 0;
};

Complex new_complex(float real, float immaginary){
    Complex c;
    c.real = real;
    c.immaginary = immaginary;
    return c;
}

void print_complex(Complex c){
    cout << c.real << " ";
    if (c.immaginary > 0)
        cout << "+";
    if (c.immaginary)
        cout << c.immaginary << "i";
}
