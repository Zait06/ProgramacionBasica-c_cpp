#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	
	int a = 1, b = 0, res;
	
	cout<<"Operadores logicos: "<<endl;
	
	res = a && b;
	cout<<"And: "<<res<<endl;
	
	res = a || b;
	cout<<"Or: "<<res<<endl;
	
	res = a > b;
	cout<<"Mayor que: "	<<res<<endl;
	
	res = a < b;
	cout<<"Menor que: "<<res<<endl;
	
	cout<<"Mayor o igual que: "<< (a>=b) <<endl;
	
	cout<<"Menor o igual que: "<< (a<=b) <<endl;
	
	cout<<"Igual a: "<< (a==b) <<endl;
	
	cout<<"Diferente de: "<< (a!=b) <<endl;
	
	return 0;
}
