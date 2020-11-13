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

void stampa(Complex c){
    cout << "(" << c.real << ", " << c.immaginary << ")";
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

Complex prodotto(Complex ca, Complex cb){
    Complex cc;
    int a = ca.real;
    int b = ca.immaginary;
    int c = cb.real;
    int d = cb.immaginary;
    cc.real = (a*c) - (b*d);
    cc.immaginary = (a*d) + (b*c);
    return cc;
}