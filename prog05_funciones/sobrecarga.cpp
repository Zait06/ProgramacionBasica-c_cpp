#include <cstdio>
#include <cstdlib>

int myFunc(int a){
	return a+5;
}

int myFunc(int a, int b){
	return a+b;
}

int main(){
	printf("Un param: %d\n", myFunc(10));
	printf("Un param: %d\n", myFunc(10,10));
	
	return 0;
}
