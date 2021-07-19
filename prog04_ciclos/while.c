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
	
	while(step <= 10){
		mult = 2 * step;
		printf("2 x %d = %d\n", step, mult);
		step++;
	}

	/*
	*	Mas tareas por hacer
	*/
	
	return 0;
}
