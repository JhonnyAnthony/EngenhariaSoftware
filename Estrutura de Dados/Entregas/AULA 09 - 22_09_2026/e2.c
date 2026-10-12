#include <stdio.h>

int main(void) {
    int v[10], busca;
    int i, ocorrencias = 0, comparacoes = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Numero que deseja buscar: ");
    scanf("%d", &busca);

    for (i = 0; i < 10; i++) {
        comparacoes++;
        if (v[i] == busca) {
            printf("Encontrado na posicao %d.\\n", i + 1);
            ocorrencias++;
        }
    }

    if (ocorrencias == 0)
        printf("Numero nao encontrado.\\n");

    printf("Total de ocorrencias: %d\\n", ocorrencias);
    printf("Comparacoes: %d\\n", comparacoes);
    return 0;
}
