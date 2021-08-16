#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Libro{
    char titulo[50];
    int pag;
    char autor[100];
};

typedef struct{
    char nombre[100];
    int edad;
    char escuela[50];
}Estudiante;

int main(){
    printf("Estructuras en C\n");
    struct Libro lib00 = {"Juliette", 100, "Marques de Sade"};
    printf("Libro: %s\n", lib00.autor);

    Estudiante est00 = {"Zait", 23, "ESCOM"};
    printf("Nombre: %s\n", est00.nombre);
    return 0;
}