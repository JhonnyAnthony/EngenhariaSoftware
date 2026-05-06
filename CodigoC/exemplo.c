#include <stdio.h>

int main()
{
    // Comentários sobre especificadores de formato:
    // %c - char (caractere)
    // %f - float (ponto flutuante)
    // %i ou %d - int (inteiro)
    
    // Declaração de variáveis:
    // idade - exemplo de variável (não utilizada no exemplo atual)
    // a, b - números que o usuário irá digitar
    // resultado - armazena a soma de a e b
    int idade, a, b, resultado;

    // Exemplo comentado de leitura de idade (desativado):
    // printf("Digite a sua idade:\n");
    // scanf("%i", &idade);

    // Solicita ao usuário que digite o primeiro número
    printf("Digite um numero\n");
    // scanf lê um inteiro e armazena no endereço de 'a'
    scanf("%i", &a);

    // Solicita ao usuário que digite o segundo número
    printf("Digite um numero\n");
    // scanf lê um inteiro e armazena no endereço de 'b'
    scanf("%i", &b);

    // Realiza a soma
    resultado = a + b;

    // Imprime o resultado formatado.
    // Observação: adicionar '\n' no final melhora a formatação da saída.
    printf("%i somado a %i é %i\n", a, b, resultado);

    // Indica término bem-sucedido do programa
    return 0;
}
