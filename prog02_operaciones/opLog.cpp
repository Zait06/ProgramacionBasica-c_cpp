#include <iostream>
// importar librerias que se usan en C
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	/**
	 * Para los operadores and, or y not
	 * 	a -> Está obscuro
	 * 	b -> Son mas de las 8pm
	 * 	res -> Prende la luz
	*/
	int a = 1, b = 0, res;
	
	cout<<"Operadores logicos: "<<endl;
	
	res = a && b;
	cout<<"And: "<<res<<endl;
	
	res = a || b;
	cout<<"Or: "<<res<<endl;

	res = !a;
	cout<<"Not: "<<res<<endl;
	
	res = a > b;
	cout<<"Mayor que: "	<<res<<endl;
	
	res = a < b;
	cout<<"Menor que: "<<res<<endl;
	
	cout<<"Mayor o igual que: "<< (a>=50) <<endl;
	
	cout<<"Menor o igual que: "<< (a<=b) <<endl;
	
	cout<<"Igual a: "<< (a==b) <<endl;
	
	cout<<"Diferente de: "<< (a!=b) <<endl;

	cout<<"Potencia "<<pow(2.2,3)<<endl;
	
	return 0;
}
