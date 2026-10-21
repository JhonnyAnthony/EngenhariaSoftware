#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vet[10];
    for(int i=0; i<10; i++){
        printf("Digite um numero\n");
        scanf("%i", &vet[i]);
    }
    for(int i=0; i<10; i++){
        printf("%i \n", vet[i]);
    }
    return 0;
}