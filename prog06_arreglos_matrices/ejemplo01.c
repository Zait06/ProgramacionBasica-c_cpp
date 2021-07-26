#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Generar una semilla
    srand(time(NULL));
    /*
        rand() % n+1
        rand() % 21
    */

    int nose[10];    // Declaramos nuestro arreglo de tamanio 10
    float califs[5], calif, sum;

    // Llenar el arreglo de valores
    int i, random, j, flag = 0;
    for(i = 0; i < 10; i++){
        random = rand() % 100;
        flag = 0;
        for(j = 0; j < i; j++){
            if(nose[j] == random){
                i--;
                flag = 1;
                break;  // Salte de este ciclo
            }
        }
        if(!flag)
            nose[i] = random;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", nose[i]);
    }

    printf("\n\n..::::::::::::::::..\n\n");

    printf("Ingrese sus calificaciones\n");

    for(i=0; i<5; i++){
        printf("Ingrese su calif No. %d: ", i);
        scanf("%f", &calif);
        califs[i] = calif;
    }

    for(i=0; i<5; i++){
        printf("%2.2f ", califs[i]);
    }

    sum = 0;
    for(i=0; i<5; i++){
        sum += califs[i];
    }

    printf("\nLa suma de las calificaciones es: %4.2f", sum);

    return 0;
}