#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int num;
    struct lista *prox;
}LISTA;

int main(void){
    int numero;
    LISTA *l = NULL;
    
    for(int i=0; i<5; i++){
        printf("Digite um numero\n");
        scanf("%i", &numero);
        LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
        novo->num=numero;
        novo->prox=l;
        l=novo;
    }
    while(l!=NULL){
        printf("%p :", l);
        printf("%i :", l->num);
        printf("%p :", l->prox);
        l =l->prox;
    }
    
    return 0;
}