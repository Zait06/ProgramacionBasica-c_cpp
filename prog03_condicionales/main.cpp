#include <stdlib.h>
#include <stdio.h>

int main(){
	char letra = 'a';
	if(letra == 'b'){
		printf("Letras iguales\n");
	}else{
		printf("Letras diferentes\n");
	}
	
	switch(letra){
		case 'a':
			printf("Es una vocal\n");
		break;
		default:
			printf("Es otra letra\n");
		break;
	}
	return 0;
}
