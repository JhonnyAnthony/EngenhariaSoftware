#include <stdio.h>

int main(){
//      Desenvolva um programa que leia um caractere representando uma letra e use
// switch-case para verificar se a letra digitada ´e uma vogal (a, e, i, o, u) ou
// uma consoante. Considere letras mai´usculas e min´usculas.
    char letra;
    printf("Digite uma letra:\n");
    scanf("%c", &letra);
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("A letra '%c' é uma vogal.\n",letra);
            break;
        default:
            printf("A letra '%c' é uma consoante.\n",letra);
            break;
    }

}