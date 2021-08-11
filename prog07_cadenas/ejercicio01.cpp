#include "miLibreria.h"

int main(){
    char palabra[100];
    cout<<"Ingrese una frase: ";
    scanf("%[^\n]", palabra);

    cout<<"El numero de consonantes es: "<<consonantes(palabra)<<endl;

    system("pause");

    return 0;
}