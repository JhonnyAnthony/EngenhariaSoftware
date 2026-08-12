#include <stdio.h>

// Faça um programa que leia um número e informe se ele é 
// positivo, negativo ou igual a zero.
int main(){
    int num;
    printf("Digite um numero\n");
    scanf("%i",&num);
    if (num == 0){
        printf("Zero\n");
    }
    else if (num > 0){
        printf("Numero Par\n");
    }
    else {
        printf("Numero Impar\n");
    } 
    return 0;
}