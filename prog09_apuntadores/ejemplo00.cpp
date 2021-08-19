#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int suma(int a, int b){
    a = a + b;
    return a;
}

void suma(int *a, int *b){
    // n1 = n1 + n2
    *a = *a + *b;
}

void resta(int *a, int *b){
    // n1 = n1 - n2
    //*a = *a - *b
    *a -= *b;
}

void recorrer(int *a){
    int i;
    for(i=0; i<5; i++){
        // a[i] = a[i] + 1
        a[i] += 1;
    }
}

int main(){
    int n1 = 10;
    int n2 = 7;

    int arr[5] = {1,2,3,4,5};   // int *arr;

    int *ptr1 = &n1;
    int *ptr2 = &n2;

    // n1 = 10
    // n2 = 7

    // int res = suma(n1, n2);
    // cout<<res<<endl;

    // suma(ptr1, ptr2);
    // // n1 = 17
    // // n2 = 7
    // cout<<n1<<endl;

    // resta(ptr1, ptr2);
    // // n1 = 10
    // cout<<n1<<endl;

    recorrer(arr);
    int i;
    for(i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}