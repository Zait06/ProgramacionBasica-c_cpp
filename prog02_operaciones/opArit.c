#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int a, b, res;
	
	a = 20;
	b = 5;
	
	res = a + b;
	printf("Suma: %d\n", res);
	
	res = a - b;
	printf("Resta: %d\n", res);
	
	printf("Multiplicacion: %d\n", a * 20);
	
	printf("Division: %d\n", a/b);
	
	res = pow(2.2,3);
	printf("Potencia: %d\n",res);
	printf("Potencia2: %lf\n", pow(2.2,3));
	
    return 0;
}
