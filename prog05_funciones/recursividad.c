#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
	if(n <= 1) return 1;
	return (n * factorial(n-1));
}

int main(){
	int num = 0;
	
	printf("Ingrese un numero para saber el factorial del mismo: ");
	scanf("%d", &num);
	
	int res = factorial(num);
	
	printf("\nEl factorial de %d es %d\n", num, res);
	
	return 0;
}
