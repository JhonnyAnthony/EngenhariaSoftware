#include <stdio.h>
// Faça um programa que leia uma letra e verifique se ela 
// corresponde a F para Feminino ou M para Masculino. Caso seja 
// digitado outro valor, o programa deve informar "Sexo inválido"
int main(){
    char sexo;
    printf("Digite seu SEXO, M para masculino e F para feminino\n");
    scanf(" %c",&sexo);
    switch (sexo)
    {
    case 'F':case 'f':
        /* code */
        printf("Feminino\n");
        break;
    case  'M': case 'm':
        printf("Masculino\n");
        break;
    default:
        printf("Sexo errado!\n");
        break;
    }
    return 0;
}