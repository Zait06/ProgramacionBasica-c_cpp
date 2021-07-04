#include <stdio.h>
#include <stdlib.h>

int main(){
    char caracter = 'a';            // Caracter
    int entero = 1;                 // Entero
    float real = 1.5;               // Flotante o real
    double doble = 3.151416;        // Flotante o real extendido
    
    printf("Tipo de datos con C\n\n");
    
    // Se necesitan especificadores de formato
    
    printf("Caracter: %c\n", caracter);         // %c character
    printf("Entero: %d\n", entero);             // %d decimal o %i integer
    printf("Real: %f\n", real);                 // %f float
    printf("Doble: %lf\n", doble);              // %lf long float
    
    return 0;    
}
