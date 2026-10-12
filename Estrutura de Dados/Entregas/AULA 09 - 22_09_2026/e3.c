#include <stdio.h>

int main(void) {
    int v[1000], valores[] = {0, 999, 1000};
    int i, j, comparacoes;

    for (i = 0; i < 1000; i++)
        v[i] = i;

    for (j = 0; j < 3; j++) {
        comparacoes = 0;

        for (i = 0; i < 1000; i++) {
            comparacoes++;
            if (v[i] == valores[j])
                break;
        }

        if (i < 1000)
            printf("Valor %d encontrado.\\n", valores[j]);
        else
            printf("Valor %d nao encontrado.\\n", valores[j]);

        printf("Comparacoes: %d\\n\\n", comparacoes);
    }

    return 0;
}
