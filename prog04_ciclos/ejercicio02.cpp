#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int num, i, j, control = 1;
    char opc, ccontrol;
    
    while(control){
        system("cls");
        cout<<"\t.:: Ciclos anidados ::."<<endl;
    
        cout<<"Ingrese un numero: ";
        cin>>num;

        cout<<"Ingrese alguna de las siguientes opciones"<<endl;
        cout<<"a) Conteo ascendente"<<endl;
        cout<<"b) Conteo descendente"<<endl;
        cout<<"c) Conteo de dos en dos"<<endl;
        cout<<"d) Impresion de asteriscos"<<endl;
        cout<<"[s]alir"<<endl;
        cout<<"Opcion: ";
        cin>>opc;

        switch(opc){
            case 'a':
                cout<<"\t.:: Conteo ascendente ::."<<endl;
                i = 1;
                while(i <= num){
                    // cout<<i<<" ";
                    printf("%d ",i);
                    i++; // i = i + 1; i += 1;
                }
            break;
            case 'b':
                cout<<"\t.:: Conteo descendente ::."<<endl;
                i = num;
                do{
                    cout<<i<<" ";
                    i--; // i = i - 1; i -= 1;
                }while(i>0);
            break;
            case 'c':
                cout<<"\t.:: Conteo dos en dos ::."<<endl;
                // i = i + 2
                for(i = 0; i <= num; i+=2)
                    cout<<i<<" ";
            break;
            case 's':
                cout<<"Saliendo del programa"<<endl;
                control = 0;
            break;
            case 'd':
                cout<<"\t.:: Impresion de asteriscos ::."<<endl;
                for(i = num; i>0; i--){
                    j = 0;
                    while(j<i){
                        cout<<"*";
                        j++;
                    }
                    // j = i
                    cout<<endl;
                }
            break;
            default:
                cout<<"Opcion no existente"<<endl;
            break;
        }

        if(control){
            cout<<"\nQuieres ejecutar alguna otra tarea?"<<endl;
            cout<<"\t[s]i\t[n]o"<<endl;
            cout<<"Opcion: ";
            cin>>ccontrol;
            if(ccontrol == 'n')
                control = 0;
        }
    }

    cout<<"Fin del programa"<<endl;

    return 0;
}