#include <stdio.h>

int buscaSequencial(int v[], int n, int valor) {
    int i, comparacoes = 0;

    for (i = 0; i < n; i++) {
        comparacoes++;
        if (v[i] == valor)
            return comparacoes;
    }

    return comparacoes;
}

int buscaBinaria(int v[], int n, int valor) {
    int inicio = 0, fim = n - 1;
    int meio, comparacoes = 0;

    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;
        comparacoes++;

        if (v[meio] == valor)
            return comparacoes;
        else if (valor < v[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return comparacoes;
}

int main(void) {
    int v[1000], valores[] = {0, 999, 1000};
    int i, seq, bin;

    for (i = 0; i < 1000; i++)
        v[i] = i;

    printf("Valor | Sequencial | Binaria\\n");

    for (i = 0; i < 3; i++) {
        seq = buscaSequencial(v, 1000, valores[i]);
        bin = buscaBinaria(v, 1000, valores[i]);

        printf("%5d | %10d | %7d\\n", valores[i], seq, bin);
    }

    return 0;
}
