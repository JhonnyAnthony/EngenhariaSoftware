#include <stdio.h>
#include <stdlib.h>

void funcaoX(int *a,int *b,int *c);

int main(void){
    int n1,n2,soma;
    printf("Digite o valor de n1\n");
    scanf("%i",&n1);
    printf("Digite o valor de n2\n");
    scanf("%i",&n2);

    funcaoX(&n1,&n2,&soma);
    printf("A soma é %i\n",soma);
    return 0;
}

void funcaoX(int *a,int *b,int *soma){
    *soma =*a+*b;
}