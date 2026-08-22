#include <stdio.h>
#include <stdlib.h>

// saida de dadas - nome da funcao - (entrada de dados)
void limpar();
int somar(int a, int b);
int leia(void);
void escreva(int a);

int main(void){
    limpar();
    escreva(somar(leia(),leia()));
    return 0;
}

void limpar(){
    system("clear");
}

int somar(int a, int b){
    int r;
    r= a+b;
    return r;
}

int leia(void){
    int n;
    printf("Digite um numero\n");
    scanf("%i",&n);
    return n;
}

void escreva(int a){
    limpar();
    printf("A soma é %i\n",a);
}
