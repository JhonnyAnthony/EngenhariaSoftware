#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int idade;
    float peso;
}Pessoa;

void saida( Pessoa a);
Pessoa entrada(Pessoa a);

int main(int argc, char const *argv[])
{
    Pessoa a;
    a = entrada(a);
    saida(a);
    return 0;
}

void saida(Pessoa a){
    printf("Nome = %s\n",a.nome);
    printf("Idade = %i\n",a.idade);
    printf("Peso = %f\n\n",a.peso);
}

Pessoa entrada(Pessoa a){
    printf("Digite um Nome\n");
    scanf(" %s",a.nome);
    printf("Digite a Idade\n");
    scanf("%i",&a.idade);
    printf("Digite o Peso\n");
    scanf("%f",&a.peso);
    return a;
}