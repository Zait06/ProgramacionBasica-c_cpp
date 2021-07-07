#include <stdio.h>
#include <stdlib.h>

int myFunc(int a){
	return a;
}

int myFunc(int a, int b){
	return a+b;
}

int main(){
	printf("Un param: %d\n", myFunc(10));
	printf("Un param: %d\n", myFunc(10,10));
	
	return 0;
}
