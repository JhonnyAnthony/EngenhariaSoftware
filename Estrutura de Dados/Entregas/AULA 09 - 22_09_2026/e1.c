#include <stdio.h>

int main(void) {
    int v[10], busca;
    int i, posicao = -1, comparacoes = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Numero que deseja buscar: ");
    scanf("%d", &busca);

    for (i = 0; i < 10; i++) {
        comparacoes++;
        if (v[i] == busca) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1)
        printf("Encontrado na posicao %d.\\n", posicao + 1);
    else
        printf("Numero nao encontrado.\\n");

    printf("Comparacoes: %d\\n", comparacoes);
    return 0;
}
