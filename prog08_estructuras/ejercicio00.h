#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

typedef struct Complejo{
    float real;     // Real
    float imag;     // Imaginario
}Complejo;

void imprimirComplejo(Complejo a){
    printf("%.2f %.2fi\n", a.real, a.imag);
}

Complejo suma(Complejo a, Complejo b){
    Complejo res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

Complejo resta(Complejo a, Complejo b){
    Complejo res;
    res.real = a.real - b.real;
    res.imag = a.imag - b.imag;
    return res;
}