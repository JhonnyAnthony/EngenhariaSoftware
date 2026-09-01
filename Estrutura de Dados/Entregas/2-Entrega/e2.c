#include <stdio.h>

void ordenar3(int *a, int *b, int *c);

int main(){
    // Construa um programa em C ANSI que leia três inteiros a, b e c e 
    // ordene em ordem crescente usando uma função void ordenar3(int *a, int *b, int *c)
    // que faça as trocas por referência e depois imprima os valores ordenados.
    int a,b,c;
    printf("Digite tres numeros inteiros\n");
    scanf("%i %i %i",&a,&b,&c);
    ordenar3(&a,&b,&c);
    printf("Numeros ordenados: %i %i %i\n",a,b,c);
    return 0;
}

void ordenar3(int *a, int *b, int *c){
    int aux;
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if(*a > *c){
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if(*b > *c){
        aux = *b;
        *b = *c;
        *c = aux;
    }
}