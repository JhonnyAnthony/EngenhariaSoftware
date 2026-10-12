#include <stdio.h>

int chamadas = 0;

int buscaBinaria(int v[], int inicio, int fim, int busca) {
    chamadas++;

    if (inicio > fim)
        return -1;

    int meio = inicio + (fim - inicio) / 2;

    if (v[meio] == busca)
        return meio;

    if (busca < v[meio])
        return buscaBinaria(v, inicio, meio - 1, busca);

    return buscaBinaria(v, meio + 1, fim, busca);
}

int main(void) {
    int v[10], i, j, temp, busca, posicao;

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

    posicao = buscaBinaria(v, 0, 9, busca);

    if (posicao != -1)
        printf("\\nEncontrado na posicao %d.\\n", posicao + 1);
    else
        printf("\\nNumero nao encontrado.\\n");

    printf("Chamadas realizadas: %d\\n", chamadas);
    return 0;
}
