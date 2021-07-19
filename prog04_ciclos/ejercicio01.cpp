#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

#define numCal 4

int main(){
    int i, cantAlumnos, j;
    float sumatoria, promedio, calificacion;

    cout<<"Ingrese la cantidad de alumnos: "<<endl;
    cin>>cantAlumnos;

    j = 1;
    sumatoria = 0;
    while(j <= cantAlumnos){
        cout<<"\nIngresa tus calificaciones alumno "<<j<<endl;
        for(i=0; i<numCal; i++){
            cout<<"Ingrese la calificacion "<<(i+1)<<": ";
            cin>>calificacion;
            sumatoria += calificacion;
        }
        j++;
    }

    promedio = sumatoria / (numCal * cantAlumnos);
    cout<<"Promedio del grupo: "<<promedio<<endl;
}