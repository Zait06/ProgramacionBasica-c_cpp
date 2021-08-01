#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

void clear(int* arreglo){
    for(int i=0; i<100; i++)
        arreglo[i] = 0;
}

void printArr(int arr[]){
    for(int i=0; i<100; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void llenarArr(int* arr, int n){
    for(int i=0; i<n; i++)
        arr[i] = rand() % 100;
}

void promedio(int arr[], int n){
    float suma = 0;
    for(int i=0; i<n; i++)
        suma += arr[i];
    printf("\nEl promedio es: %4.2f\n", suma/(float) n);
}

void moda(int arr[], int n){
    int moda[100];
}

int main(){
	int arr[100];   // Declaracion
    int n;
    
    srand(time(NULL));

	clear(arr);
    cout<<"Ingrese el numero de datos: ";
    cin>>n;
    llenarArr(arr, n);
    promedio(arr, n);
	
	return 0;
}