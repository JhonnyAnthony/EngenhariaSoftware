#include <stdio.h>

int main(void) {
    int v[10], i, j, temp, busca;
    int inicio, fim, meio, posicao = -1, comparacoes = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    /* Ordenacao por Bubble Sort */
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < 10; i++)
        printf("%d ", v[i]);

    printf("\\nNumero que deseja buscar: ");
    scanf("%d", &busca);

    inicio = 0;
    fim = 9;

    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;
        comparacoes++;

        if (v[meio] == busca) {
            posicao = meio;
            break;
        } else if (busca < v[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    if (posicao != -1)
        printf("Encontrado na posicao %d do vetor ordenado.\\n", posicao + 1);
    else
        printf("Numero nao encontrado.\\n");

    printf("Comparacoes: %d\\n", comparacoes);
    return 0;
}
