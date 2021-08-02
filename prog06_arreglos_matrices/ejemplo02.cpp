#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

void clear(int* arreglo){
    for(int i=0; i<100; i++)
        arreglo[i] = 0;
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++)
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
    int moda[100], indice = 0, max = 0;
    clear(moda);

    for(int i=0; i<n; i++){
        indice = arr[i];
        moda[indice]+=1;
    }

    for(int i=0; i<100; i++){
        if(moda[i] > max){
            max = moda[i];
            indice = i;
        }
    }
    cout<<"La moda es "<<indice<<" con "<<max<<" repeticiones"<<endl;
}

void mediana(int arr[], int n){
    // Inicio bubble sort
    int i, j, aux;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                // inicio swap
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                // fin swap
            }
        }
    }
    // fin bubble sort
    aux = n / 2;
    cout<<"La mediana es "<<arr[aux]<<endl;
}

int main(){
	int arr[100];   // Declaracion
    int n;
    
    srand(time(NULL));

	clear(arr);
    cout<<"Ingrese el numero de datos: ";
    cin>>n;
    llenarArr(arr, n);
    printArr(arr, n);
    promedio(arr, n);
    moda(arr, n);
    mediana(arr, n);
	
	return 0;
}