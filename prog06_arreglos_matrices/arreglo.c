#include <stdlib.h>
#include <stdio.h>

int main(){
   int a[5] = {16,45,78,95,8}; // Declaracion de un arreglo.
  
   // printf("Accediendo al dato 4 del arreglo: %d\n", a[3]);

   int i;
   /*    Los indices siempre son de tipo entero
    *    n = 5
    *    n - 1 = 4 
    */
   for(i = 0; i < 5; i++)
      printf("%d ", a[i]);

   printf("\n");
  
   a[2] = 25;  // Cambiando un dato en un arreglo.

   // printf("Accediendo al dato 4 del arreglo: %d\n", a[3]);

   for(i = 0; i < 5; i++)
      printf("%d ", a[i]);
      
   printf("\n");

	return 0;
}
