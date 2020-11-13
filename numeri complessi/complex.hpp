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
    cout << c.real << " + " << c.immaginary << "i";
}

Complex coniugato(Complex a){
    Complex c;
    c.real = a.real;
    c.immaginary = -a.immaginary;
    return c;
}

Complex somma(Complex a, Complex b){
    Complex c;
    c.real = a.real + b.real;
    c.immaginary = a.immaginary + b.immaginary;
    return c;
}

Complex prodotto(Complex a, Complex b){
    Complex c;

    c.immaginary = (a.real*b.real) - (a.immaginary*b.immaginary);
    c.real = (a.real*b.immaginary) + (a.immaginary*b.real);

    return c;
}