#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct {
    char nome[30];
    int idade;
    float altura;
}Pessoa;

int qtd=0;

void saida( Pessoa a);
Pessoa entrada(void);

int main(int argc, char const *argv[])
{
    int opcao;
    Pessoa bd[TAM];
    do
    {
        // system("clear");
        printf("1 - Adicionar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        printf("Digite uma opção\n");
        scanf("%i",&opcao);
        switch (opcao)
        {
        case 1:
            if(qtd<TAM){
                bd[qtd]=entrada();
                qtd++;
                printf("Dado Adicionado!\n");
            }else{
                printf("ERRO! Chegou no Limite do Vetor.\n");
            }
            break;
        case 2:
            for(int i = 0;i<qtd;i++){
                saida(bd[i]);
            }
            break;
        case 3:
            break;
        default:
            printf("ERRO! Não tem essa opção\n");
            break;
        }
        // system("read");
    } while (opcao != 3);
    
    return 0;
}

void saida(Pessoa a){
    printf("Nome = %s\n",a.nome);
    printf("Idade = %i\n",a.idade);
    printf("Altura = %f\n\n",a.altura);
}

Pessoa entrada(void){
    Pessoa a;
    printf("Digite um Nome\n");
    scanf(" %s",a.nome);
    printf("Digite a Idade\n");
    scanf("%i",&a.idade);
    printf("Digite a Altura\n");
    scanf("%f",&a.altura);
    return a;
}