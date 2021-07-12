#include <stdio.h>
#include <stdlib.h>

// Comentario de un renglon

/*
    Comentario de
    varios
    renglones
*/


// #define Nombre_constante valor
#define PI 3.141516

int main(){
    /*
        Declaración de una variable

        1. [tipo de dato] Nombre_variable = valor;
        2. [tipo de dato] Nombre_variable;
            Nombre_variable = valor;
    */
    char caracter = 'a';            // Caracter
    int entero = 1;                 // Entero
    float real = 1.5;               // Flotante o real
    double doble = 0.141625;        // Flotante o real extendido
    
    printf("Tipo de datos con C\n\n");
    
    // Se necesitan especificadores de formato
    
    printf("Caracter: %c\n", caracter);         // %c character
    printf("Entero: %d\n", entero);             // %d decimal o %i integer
    printf("Real: %f\n", real);                 // %f float
    printf("Doble: %lf\n", doble);              // %lf long float o double
    printf("Define: %lf\n", PI);

    caracter = 'g';
    printf("Caracter: %c\n", caracter);
    printf("Caracter: %i\n", caracter);

    return 0;
}
