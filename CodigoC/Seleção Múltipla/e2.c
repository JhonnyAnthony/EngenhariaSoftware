#include <stdio.h>

int main(){
//     Desenvolva um programa leia um n´umero inteiro de 1 a 7 e utilize a estrutura
// switch-case para exibir o dia da semana correspondente (por exemplo: 1 para
// Domingo, 2 para Segunda-feira, etc.). Caso o valor informado seja inv´alido, exiba
// uma mensagem de erro.
    int dia;
    printf("Digite um numero inteiro para saber o dia da semana correspondente:\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda-feira\n");
    printf("3 - Terça-feira\n");
    printf("4 - Quarta-feira\n");
    printf("5 - Quinta-feira\n");
    printf("6 - Sexta-feira\n");
    printf("7 - Sábado\n");
    scanf("%d", &dia);
    switch(dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Erro: Número inválido. Por favor, digite um número entre 1 e 7.\n");
    }
    return 0;
}