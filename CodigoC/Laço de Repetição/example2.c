#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    // int randomNumber;
    int count = 0;
    int senha;
    printf("Digite uma senha numérica: \n");
    scanf("%d", &senha);
    int maxTentativas = 5;
    while (senha != 1234 && count < maxTentativas)
    {
        printf("Senha errada, Tentativa %d: ", count + 1);
        scanf("%d", &senha);
        count++;
    }
    if (count == maxTentativas)
    {
        printf("Número máximo de tentativas atingido.\n");
    }
    else
    {
        printf("Senha correta!\n");
    }

    return 0;
}
