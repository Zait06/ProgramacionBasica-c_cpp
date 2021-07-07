#include <stdlib.h>
#include <stdio.h>

int main(){
   int a[5] = {1,2,3,4,5}; // Declaración de un arreglo.
  
   printf("Accediendo al dato 4 del arreglo: %d\n", a[3]);
  
   a[3] = 25;  // Cambiando un dato en un arreglo.

   printf("Accediendo al dato 4 del arreglo: %d\n", a[3]);

	return 0;
}
