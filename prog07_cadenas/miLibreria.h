#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int esNoVocal(char c){
    if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u' || c==32)
        return 0;
    return 1;
}

int consonantes(char word[]){
    int i, tam = strlen(word);
    int aux = 0;
    for(i=0; i<tam; i++)
        aux += esNoVocal(word[i]);
    
    return aux;
}