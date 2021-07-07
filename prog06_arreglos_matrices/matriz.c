#include <stdlib.h>
#include <stdio.h>

/*
	Matriz
		| 1 | 2 | 3 |
		| 4 | 5 | 6 |
*/

int main(){
	int a[2][3] = {1,2,3,4,5,6};
	int b[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	
	printf("Accediendo al dato 4 de la matriz a: %d\n", a[1][0]);
	printf("Accediendo al dato 4 de la matriz b: %d\n", b[1][0]);
	
	b[1][0] = 25;
	
	printf("Accediendo al dato 4 de la matriz b: %d\n", b[1][0]);
	
	return 0;
}

