#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void sumar(int mat[][10], int f, int c);
void imprimirMat(int mat[][10], int f, int c);

int main(){
    int a[10][10];
    int nf, nc;

    cout<<"Ingrese el numero de filas: ";
    cin>>nf;
    cout<<"Ingrese el numero de columnas: ";
    cin>>nc;

    int i, j, aux;
    for(i=0; i<nf; i++){         // Ciclo de filas
        for(j=0; j<nc; j++){     // Ciclo de columnas
            printf("Mat[%2d][%2d]: ", i,j);
            cin>>aux;
            a[i][j] = aux;
        }
    }
    
    imprimirMat(a, nf, nc);
    sumar(a, nf, nc);
}

void imprimirMat(int mat[][10], int f, int c){
    int i, j;
    cout<<endl;
    for(i=0; i<f; i++){         // Ciclo de filas
        for(j=0; j<c; j++){     // Ciclo de columnas
            printf("%2d ", mat[i][j]);
        }
        cout<<endl;
    }
}

void sumar(int mat[][10], int f, int c){
    cout<<endl;
    int i, j, aux;
    for(i=0; i<f; i++){         // Ciclo de filas
        aux = 0;
        for(j=0; j<c; j++){     // Ciclo de columnas
            aux += mat[i][j];
        }
        printf("El resultado de la fila %d es: %d\n", i, aux);
    }

    // Suma de la diagonal
    if(f == c){
        aux = 0;
        /*
        for(i=0; i<f; i++){         // Ciclo de filas
            for(j=0; j<c; j++){     // Ciclo de columnas
                if(i == j)
                    aux += mat[i][j];
            }
        }*/
        for(i=0; i<f; i++)
            aux += mat[i][i];
        printf("El resultado de la diagonal es: %d\n", aux);
    }
}