
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *ant;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Lista;

// Inicializa a lista
void inicializar(Lista *lista) {
    lista->inicio = NULL;
    lista->fim = NULL;
}

// Insere um elemento no inicio
void inserirInicio(Lista *lista, int valor) {
    No *novo = (No *) malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->ant = NULL;
    novo->prox = lista->inicio;

    if (lista->inicio != NULL) {
        lista->inicio->ant = novo;
    } else {
        lista->fim = novo;
    }

    lista->inicio = novo;
}

// Insere um elemento no final
void inserirFinal(Lista *lista, int valor) {
    No *novo = (No *) malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    novo->valor = valor;
    novo->prox = NULL;
    novo->ant = lista->fim;

    if (lista->fim != NULL) {
        lista->fim->prox = novo;
    } else {
        lista->inicio = novo;
    }

    lista->fim = novo;
}

// Exibe do inicio para o final
void exibirFrente(Lista *lista) {
    No *atual = lista->inicio;

    printf("Frente: NULL <- ");

    while (atual != NULL) {
        printf("%d", atual->valor);

        if (atual->prox != NULL) {
            printf(" <-> ");
        }

        atual = atual->prox;
    }

    printf(" -> NULL\n");
}

// Exibe do final para o inicio
void exibirTras(Lista *lista) {
    No *atual = lista->fim;

    printf("Tras:   NULL <- ");

    while (atual != NULL) {
        printf("%d", atual->valor);

        if (atual->ant != NULL) {
            printf(" <-> ");
        }

        atual = atual->ant;
    }

    printf(" -> NULL\n");
}

// Libera a memoria ocupada pela lista
void liberarLista(Lista *lista) {
    No *atual = lista->inicio;

    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    lista->inicio = NULL;
    lista->fim = NULL;
}

int main() {
    Lista lista;
    int valor;

    inicializar(&lista);

    // Insere 3 valores no inicio
    printf("Digite 3 valores para inserir no inicio:\n");

    for (int i = 0; i < 3; i++) {
        scanf("%d", &valor);
        inserirInicio(&lista, valor);
    }

    // Insere 2 valores no final
    printf("Digite 2 valores para inserir no final:\n");

    for (int i = 0; i < 2; i++) {
        scanf("%d", &valor);
        inserirFinal(&lista, valor);
    }

    // Exibe nos dois sentidos
    printf("\nLista duplamente encadeada:\n");
    exibirFrente(&lista);
    exibirTras(&lista);

    liberarLista(&lista);

    return 0;
}
