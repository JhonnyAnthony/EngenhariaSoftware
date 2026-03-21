#include <stdio.h>
int main()
{
    // ( %c) - char
    // %f - float
    // %i or %d- int
    int idade, a,b,resultado;
    // printf("Digite a sua idade:\n");
    // scanf("%i",&idade);
    // %variavel - pega o endereco da variavel
    printf("Digite um numero\n");
    scanf("%i",&a);
    printf("Digite um numero\n");
    scanf("%i",&b);
    resultado = a + b;
    printf("%i somado a %i é %i: ",a,b,resultado);
    return 0;
}
