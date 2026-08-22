#include <stdio.h>

int valida(int a);

int main(void){
    int num;
    printf("Digite um numero:\n");
    scanf("%i", &num);
    printf("O numero %s", valida(num) ? "Par" : "Impar");
    return 0;
}

int valida(int a){
    if (a%2==0){
        return 1; // Par
    }
    else{
        return 0; // Impar
    }
}
