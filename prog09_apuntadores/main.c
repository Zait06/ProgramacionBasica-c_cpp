#include <stdio.h>
#include <stdlib.h>

int main(){
	// Declaracion
	int *ptr;
    int a = 80;
    
    // Asignacion
    ptr = &a;
    
    // Impresion de datos
    printf("Direccion del apuntador %p\n", ptr);
    printf("Valor que guarda el apuntador %d\n", *ptr);
	
	return 0;
}
