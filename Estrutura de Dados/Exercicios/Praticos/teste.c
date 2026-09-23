#include <stdio.h>

int main() {
    int i;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &i);

    int numero[i];

    printf("Digite os valores do vetor:\n");

    for (int j = 0; j < i; j++) {
        scanf("%i", &numero[j]);
    }

    printf("Lista: [");

    for (int k = 0; k < i; k++) {
        printf("%i", numero[k]);

        if (k < i - 1) {
            printf(",");
        }
    }

    printf("]\n");

    return 0;
}
