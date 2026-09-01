#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct {
    char raca[30];
    char cor[15];
    char sexo[2];
    float peso;
}Animal;

int qtd=0;

void saida( Animal a);
Animal entrada(void);
int main(int argc, char const *argv[])
{
   int opcao;
    Animal bd[TAM];
    do
    {
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
                system("clear");
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

void saida(Animal a){
    printf("Raca =  %s\n",a.raca);
    printf("Cor =  %s\n",a.cor);
    printf("Sexo = %s\n\n",a.sexo);
    printf("Peso = %f\n\n",a.peso);
}

Animal entrada(void){
    Animal a;
    printf("Digite uma Raca\n");
    scanf(" %s",a.raca);
    printf("Digite a Cor\n");
    scanf(" %s",a.cor);
    printf("Digite o Sexo\n");
    scanf(" %s",a.sexo);
    printf("Digite o Peso\n");
    scanf("%f",&a.peso);
    return a;
}