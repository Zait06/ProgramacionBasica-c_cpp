#include <stdlib.h>
#include <stdio.h>

int main(){
	char letra = 'a';

	printf("\nIngrese una letra: ");
	scanf("%c", &letra);

	if(letra == 'a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
		printf("Es una vocal\n");
	}else{
		printf("Letra diferente\n");
	}
	
	switch(letra){
		case 'a': case 'e': case 'i':
		case 'o': case 'u':
			printf("Es una vocal\n");
			/*
				Puedo tener
				Más codigo adentro
				que solamente
				se va a ejecutar
				en este caso
			*/
		break;
		default:
			printf("Es otra letra\n");
		break;
	}
	return 0;
}
