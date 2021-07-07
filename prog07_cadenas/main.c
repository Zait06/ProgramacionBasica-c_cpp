#include <stdio.h>
#include <stdlib.h>

int main(){
	char nombre[] = "Zait";
	
	printf("Nombre: %s\n", nombre);
	
	printf("Ingrese nuevo nombre: ");
	scanf("%s", &nombre);
	
	printf("Nombre: %s", nombre);
	
	return 0;
}
