
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

int main() {
    No *inicio = NULL;
    No *fim = NULL;
    No *novo;
    No *atual;
    int valor;

    // Insercao de 5 valores no final
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        novo = (No *) malloc(sizeof(No));

        if (novo == NULL) {
            printf("Erro ao alocar memoria.\n");
            return 1;
        }

        novo->valor = valor;
        novo->prox = NULL;

        if (inicio == NULL) {
            inicio = novo;
            fim = novo;
        } else {
            fim->prox = novo;
            fim = novo;
        }
    }

    // Exibicao da lista
    printf("\nLista encadeada: ");
    atual = inicio;

    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }

    printf("NULL\n");

    // Liberacao da memoria
    atual = inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}
