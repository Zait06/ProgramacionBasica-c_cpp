#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s01[50] = "Hola ";
	char s02[50] = "mundo!";
	char s03[50];
	
	printf("S01: %s\n", s01);
	printf("S02: %s\n", s02);
	printf("S03: %s\n", s03);
	
	strcpy(s03, s02);	// Copiando "mundo!" a s03
	printf("Copia de S02 es S03: %s\n", s03);
	
	strcat(s01, s02);	// Concatenando "Hola " con "mundo!" Res: "Hola mundo!"
	int tam = strlen(s01);	// Tamanio de la cadena
	int cmp = strcmp(s03, s02);	// Comparando "mundo!" con "mundo!"
	
	printf("\nConcatenando S01 y S02: %s\n", s01);
	printf("Tamanio S01: %d\n", tam);
	printf("Son iguales S03 y S02? %d\n", cmp);
	
	printf("Leer una frase: ");
	// scanf("%s", s03);
	scanf("%[^\n]", s03);
	printf("\n%s\n", s03);
	
	return 0;
}
