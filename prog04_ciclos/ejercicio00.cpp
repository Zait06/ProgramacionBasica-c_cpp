#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int numCal, i;
    float sumatoria, promedio, calificacion;

    cout<<"Ingrese la cantidad de materias cursadas: ";
    cin>>numCal;
    cout<<"Ingresa tus calificaciones"<<endl;

    sumatoria = 0;

    // for(i=1;i<=numCal;i++)
    for(i=0; i<numCal; i++){
        cout<<"Ingrese la calificacion "<<(i+1)<<" : ";
        cin>>calificacion;
        // sumatoria = sumatoria + calificacion
        sumatoria += calificacion;
    }

    promedio = sumatoria / numCal;

    cout<<"\nPromedio: "<<promedio;
}