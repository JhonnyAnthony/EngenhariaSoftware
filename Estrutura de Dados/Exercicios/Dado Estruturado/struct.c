#include <stdio.h>
#include <stdlib.h>

#define TAM 5

struct pessoa{
    char nome[30];
    int idade;
    float altura;
};

int qtd=0;

void saida(struct pessoa a);
struct pessoa entrada(void);

int main(int argc, char const *argv[])
{
    int opcao;
    struct pessoa bd[TAM];
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

void saida(struct pessoa a){
    printf("Nome = %s\n",a.nome);
    printf("Idade = %i\n",a.idade);
    printf("Altura = %f\n\n",a.altura);
}

struct pessoa entrada(void){
    struct pessoa a;
    printf("Digite um Nome\n");
    scanf(" %s",a.nome);
    printf("Digite a Idade\n");
    scanf("%i",&a.idade);
    printf("Digite a Altura\n");
    scanf("%f",&a.altura);
    return a;
}