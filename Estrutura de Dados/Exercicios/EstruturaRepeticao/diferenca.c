#include <stdio.h>

int main(void)
{
    // crie um programa que leia dez numeros inteiros e determine qual o maior e qual o menor valor informado.
    // ao final o programa deve calcular e mostrar a diferença entre o maior e o menor
    int num,maior;
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite um numero\n");
        scanf("%i",&num);
        if(i == 1){
            maior = num;
        }
        if(maior > num){
            printf("O maior é %i e o menor é %i\n",maior,num);
            printf("A diferença entre o maior e o menor é %i\n",maior-num);
        }
        else if(maior < num){
            printf("O maior é %i e o menor é %i\n",num,maior);
            printf("A diferença entre o maior e o menor é %i\n",num-maior);
            maior = num;
        }
        else{printf("Iguais\n");}
    }
    return 0;
}
