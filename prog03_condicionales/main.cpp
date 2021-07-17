#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
	char opcion;
	float promedio;
	int numero;

	cout<<"Elija una opcion:"<<endl;
	cout<<"\ta) Ingresar promedio"<<endl;
	cout<<"\tb) Numero divisible entre 3"<<endl;
	cout<<"\tc) Salir del programa"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;

	// if(opcion == 'a'){
	// 	cout<<"Ingresar promedio"<<endl;
	// }else if(opcion == 'b'){
	// 	cout<<"Numero divisible entre 3"<<endl;
	// }else if(opcion == 'c'){
	// 	cout<<"Salir del programa"<<endl;
	// }else{
	// 	cout<<"Esta opcion no existe"<<endl;
	// }

	switch(opcion){
		case 'a':
			cout<<"\tIngresar promedio"<<endl;
			cout<<"Ingrese su promedio: ";
			cin>>promedio;

			if(promedio <= 2.5){
				cout<<"Eres un super burro"<<endl;
				/*
					Aqui podemos tener
					mucho mas intstrucciones
					asi 
					demasiadas
				*/
			}else if(promedio > 2.5 && promedio <= 5){
				cout<<"Eres un burro"<<endl;
			}else if(promedio > 5 && promedio <=7.9){
				cout<<"Aplicate rey"<<endl;
			// }else if(promedio > 8 && promedio <=10){
			}else{
				cout<<"Muy bien, sigue asi"<<endl;
			}

		break;
		case 'b':
			cout<<"\tNumero divisible entre 3"<<endl;
			cout<<"Ingrese un numero: ";
			cin>>numero;
			if(numero%3 == 0)
				cout<<"El numero es divisible entre 3"<<endl;
			else
				cout<<"El numero no es divisible entre 3"<<endl;
		break;
		case 'c':
			cout<<"\tSalir del programa"<<endl;
		break;
		default:
			cout<<"\tEsta opcion no existe"<<endl;
		break;
	}

	return 0;
}
