#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float codigo;
    char nome[30];
    float peso;
    float preco;
}Peca;

void saida( Peca a);
Peca entrada(Peca a);

int main(int argc, char const *argv[])
{
    Peca a;
    a = entrada(a);
    saida(a);
    return 0;
}

void saida(Peca a){
    printf("Código = %f\n",a.codigo);
    printf("Nome = %s\n",a.nome);
    printf("Idade = %f\n",a.peso);
    printf("Peso = %f\n\n",a.preco);
}

Peca entrada(Peca a){
    printf("Digite um Código\n");
    scanf("%f",&a.codigo);
    printf("Digite a Nome\n");
    scanf(" %s",a.nome);
    printf("Digite o Peso\n");
    scanf("%f",&a.peso);
    printf("Digite o Preço\n");
    scanf("%f",&a.preco);
    return a;
}