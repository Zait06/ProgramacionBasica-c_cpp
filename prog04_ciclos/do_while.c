#include <stdio.h>
#include <stdlib.h>

/*
	La linea:
		step++
	Es igual que:
		step = step + 1
	O bien:
		step += 1;
*/

int main(){
	int step = 0, mult;
	
	do{
		mult = 2 * step;
		printf("2 x %d = %d\n", step, mult);
		step++;
	}while(step <= 10);
	
	return 0;
}
