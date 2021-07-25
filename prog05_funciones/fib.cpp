#include <iostream>

using namespace std;

int fib(int n);
void principal(void);

int main(){
    
    principal();

    return 0;
}

void principal(void){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"El resultado del numero de Fibonacci es: "<<fib(n)<<endl;
}

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-2)+fib(n-1);
}

