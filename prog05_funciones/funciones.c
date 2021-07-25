#include <stdio.h>
#include <stdlib.h>

void holaMundo(){
	printf("Hola mundo :D\n");
}

void suma(int a, int b){
	printf("Suma: %d\n", a+b);
}

int resta();
int multi(int a, int b);

int main(){
	int res;
	
	holaMundo();
	suma(6,4);
	res = resta();
	printf("Resta: %d\n", res);
	printf("Multiplicacion: %d", multi(4,2));
	
	return 0;
}

int resta(){
	return 20-5;
}

int multi(int a, int b){
	return a*b;
}
