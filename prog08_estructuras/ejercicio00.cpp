#include "ejercicio00.h"

int main(){
    Complejo c1, c2;
    float re,im;

    cout<<"Ingrese un numero complejo: ";
    scanf("%f%fi", &re, &im);
    c1.real = re;
    c1.imag = im;

    cout<<"Ingrese otro numero complejo: ";
    scanf("%f%fi", &re, &im);
    c2.real = re;
    c2.imag = im;

    imprimirComplejo(c1);
    imprimirComplejo(c2);

    cout<<"Suma: ";
    imprimirComplejo(suma(c1, c2));
    cout<<"Resta: ";
    imprimirComplejo(resta(c1, c2));

    return 0;
}