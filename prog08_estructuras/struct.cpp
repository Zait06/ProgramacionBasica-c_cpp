#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Estudiante{
    char nombre[100];
    int edad;
    char escuela[50];
};

int main(){
    printf("Estructuras en C++\n");

    Estudiante est00 = {"Zait", 23, "ESCOM"};
    cout<<"Nombre: "<<est00.nombre<<endl;

    return 0;
}