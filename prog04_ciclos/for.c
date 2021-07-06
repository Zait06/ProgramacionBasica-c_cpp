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
	int step, mult;
	
	for(step=0; step<=10; step++){
		mult = 2 * step;
		printf("2 x %d = %d\n", step, mult);
	}
	
	return 0;
}
