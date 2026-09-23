/*
Disciplina: Estrutura de Dados
Atividade: Comparacao de desempenho entre metodos de ordenacao
Aluno: Jhonny Anthony de Souza

Conseguiu chegar nos valores de referencia?
R:
Se nao, em quais metodos e por que?
R:

Metodos analisados:
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAM 10000
#define N_METODOS 5
#define N_CENARIOS 3
#define RODADAS_ALEATORIO 3
#define N_CARTAS 8

/* ------------------------------------------------------------------
   Contadores globais. Sao zerados antes de cada execucao.
   comparacoes   : dois valores do vetor comparados para decidir a ordem
   trocas        : dois elementos trocam de posicao entre si
   movimentacoes : cada atribuicao que leva um valor do vetor para outro
                   lugar (posicao, aux, chave, pivo ou vetor temporario)
   ------------------------------------------------------------------ */
long comparacoes, trocas, movimentacoes;

int vetorBase[TAM];   /* criado uma vez por cenario/rodada */
int vetorTeste[TAM];  /* recebe uma copia do vetorBase antes de cada metodo */
int temp[TAM];        /* vetor auxiliar do Merge Sort */

/* Sequencia das 8 cartas anotada no simulador (Etapa 1).
   SUBSTITUA pelos valores que apareceram na sua tela. */
int cartas[N_CARTAS] = {5, 2, 8, 1, 7, 3, 6, 4};

const char *nomes[N_METODOS] = {"Bubble", "Selection", "Insertion", "Merge", "Quick"};
const char *nomesCenario[N_CENARIOS] = {"DADOS ORDENADOS", "DADOS INVERTIDOS", "DADOS ALEATORIOS"};
const char *nomesResumo[N_CENARIOS] = {"Ordenados", "Invertidos", "Aleatorios"};

/* Resultados [cenario][metodo]. No aleatorio guardam a media das rodadas. */
double resComp[N_CENARIOS][N_METODOS];
double resTroca[N_CENARIOS][N_METODOS];
double resMov[N_CENARIOS][N_METODOS];
double resTempo[N_CENARIOS][N_METODOS];

void zeraContadores(void){
    comparacoes = 0;
    trocas = 0;
    movimentacoes = 0;
}

/* op 1: ordenado | op 2: invertido | op 3: aleatorio */
void geraNumero(int *v, int n, int op){
    int i;
    for(i = 0; i < n; i++){
        if(op == 1)      v[i] = i + 1;          /* 1 a n em ordem crescente */
        else if(op == 2) v[i] = n - i;          /* n a 1 em ordem decrescente */
        else             v[i] = rand() % 10000; /* sorteio */
    }
}

/* ======================= BUBBLE SORT ======================= */
void bubbleSort(int *v, int n){
    int i, passagem, aux, houveTroca;
    passagem = 1;
    houveTroca = 1;
    while(passagem <= n && houveTroca == 1){
        houveTroca = 0;
        for(i = 0; i < n - 1; i++){
            comparacoes++;                  /* v[i] > v[i + 1], entre vizinhos */
            if(v[i] > v[i + 1]){
                houveTroca = 1;
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                trocas++;                   /* par fora de ordem: 1 troca */
                movimentacoes += 3;         /* 3 atribuicoes da troca */
            }
        }
        passagem++;
    }
}

/* ======================= SELECTION SORT ======================= */
void selectionSort(int *v, int n){
    int i, j, min, aux;
    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            comparacoes++;                  /* v[j] < v[min], busca do menor */
            if(v[j] < v[min]){
                min = j;
            }
        }
        if(min != i){                       /* so troca se algum valor muda de lugar */
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
            trocas++;
            movimentacoes += 3;
        }
    }
}

/* ======================= INSERTION SORT ======================= */
void insertionSort(int *v, int n){
    int i, j, chave;
    for(i = 1; i < n; i++){
        chave = v[i];
        movimentacoes++;                    /* guardar a chave */
        j = i - 1;
        while(j >= 0){                      /* j >= 0 e controle: nao conta */
            comparacoes++;                  /* v[j] > chave: so conta se chegou a ser feita */
            if(!(v[j] > chave)){
                break;
            }
            v[j + 1] = v[j];
            movimentacoes++;                /* deslocamento para a direita */
            j--;
        }
        v[j + 1] = chave;
        movimentacoes++;                    /* insercao da chave */
    }
}

/* ======================= MERGE SORT ======================= */
void merge(int *v, int inicio, int meio, int fim){
    int i, j, k;
    i = inicio;
    j = meio + 1;
    k = inicio;

    /* Intercala os elementos */
    while(i <= meio && j <= fim){
        comparacoes++;                      /* v[i] <= v[j], na intercalacao */
        if(v[i] <= v[j]){
            temp[k] = v[i];
            i++;
        } else {
            temp[k] = v[j];
            j++;
        }
        movimentacoes++;                    /* copia para temp */
        k++;
    }

    /* Copia os elementos restantes */
    while(i <= meio){
        temp[k] = v[i];
        movimentacoes++;                    /* copia para temp */
        i++;
        k++;
    }
    while(j <= fim){
        temp[k] = v[j];
        movimentacoes++;                    /* copia para temp */
        j++;
        k++;
    }

    /* Copia de volta para o vetor original */
    for(i = inicio; i <= fim; i++){
        v[i] = temp[i];
        movimentacoes++;                    /* copia de volta para v */
    }
}

void mergeSort(int *v, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}

/* ======================= QUICK SORT ======================= */
void troca(int *a, int *b){
    int t;
    if(a == b){
        return;                             /* mesma posicao: nenhum valor muda, nao conta */
    }
    t = *a;
    *a = *b;
    *b = t;
    trocas++;
    movimentacoes += 3;
}

int particiona(int *v, int inicio, int fim){
    int pivo, i, j;
    pivo = v[fim];
    movimentacoes++;                        /* guardar o pivo */
    i = inicio - 1;
    for(j = inicio; j < fim; j++){
        comparacoes++;                      /* v[j] < pivo, na particao */
        if(v[j] < pivo){
            i++;
            troca(&v[i], &v[j]);
        }
    }
    troca(&v[i + 1], &v[fim]);
    return i + 1;
}

void quickSort(int *v, int inicio, int fim){
    int posPivo;
    if(inicio < fim){
        posPivo = particiona(v, inicio, fim);
        quickSort(v, inicio, posPivo - 1);
        quickSort(v, posPivo + 1, fim);
    }
}

/* ======================= EXECUCAO E MEDICAO ======================= */

/* Chama o metodo e devolve o tempo em ms. Mede somente a ordenacao. */
double executa(int metodo, int *v, int n){
    clock_t inicio, fim;
    inicio = clock();
    switch(metodo){
        case 0: bubbleSort(v, n);        break;
        case 1: selectionSort(v, n);     break;
        case 2: insertionSort(v, n);     break;
        case 3: mergeSort(v, 0, n - 1);  break;
        case 4: quickSort(v, 0, n - 1);  break;
    }
    fim = clock();
    return (double)(fim - inicio) * 1000.0 / CLOCKS_PER_SEC;
}

/* Confere se o vetor terminou ordenado (fora da medicao de tempo). */
int estaOrdenado(int *v, int n){
    int i;
    for(i = 0; i < n - 1; i++){
        if(v[i] > v[i + 1]) return 0;
    }
    return 1;
}

void linha(void){
    printf("=====================================================================\n");
}

/* Validacao com as 8 cartas do simulador */
void validacao(void){
    int m, i;
    linha();
    printf("VALIDACAO - %d CARTAS\n", N_CARTAS);
    linha();
    printf("Sequencia inicial:");
    for(i = 0; i < N_CARTAS; i++) printf(" %d", cartas[i]);
    printf("\n\n%-10s %12s %8s %14s\n", "Metodo", "Comparacoes", "Trocas", "Movimentacoes");
    for(m = 0; m < N_METODOS; m++){
        memcpy(vetorTeste, cartas, sizeof(cartas));
        zeraContadores();
        executa(m, vetorTeste, N_CARTAS);
        printf("%-10s %12ld %8ld %14ld\n", nomes[m], comparacoes, trocas, movimentacoes);
    }
    printf("\n");
}

void imprimeTabela(int c){
    int m;
    linha();
    if(c == 2)
        printf("CENARIO %d - %s - %d ELEMENTOS (media de %d execucoes)\n",
               c + 1, nomesCenario[c], TAM, RODADAS_ALEATORIO);
    else
        printf("CENARIO %d - %s - %d ELEMENTOS\n", c + 1, nomesCenario[c], TAM);
    linha();
    printf("%-10s %15s %12s %15s %11s\n", "Metodo", "Comparacoes", "Trocas", "Movimentacoes", "Tempo (ms)");
    for(m = 0; m < N_METODOS; m++){
        printf("%-10s %15.0f %12.0f %15.0f %11.2f\n",
               nomes[m], resComp[c][m], resTroca[c][m], resMov[c][m], resTempo[c][m]);
    }
    printf("\n");
}

/* Monta o texto com o(s) melhor(es) de um indicador; empates aparecem juntos. */
void melhores(double *valores, double tolerancia, char *saida){
    int m;
    double min = valores[0];
    for(m = 1; m < N_METODOS; m++){
        if(valores[m] < min) min = valores[m];
    }
    saida[0] = '\0';
    for(m = 0; m < N_METODOS; m++){
        if(valores[m] - min <= tolerancia){
            if(saida[0] != '\0') strcat(saida, ", ");
            strcat(saida, nomes[m]);
        }
    }
}

/* Resumo: nao aponta melhor por trocas (Insertion e Merge nao trocam). */
void imprimeResumo(void){
    int c;
    char comp[100], mov[100], tempo[100];
    linha();
    printf("RESUMO\n");
    linha();
    printf("%-11s | %-20s | %-20s | %s\n", "Cenario", "Menos comparacoes", "Menos movimentacoes", "Menor tempo");
    for(c = 0; c < N_CENARIOS; c++){
        melhores(resComp[c], 0.5, comp);
        melhores(resMov[c], 0.5, mov);
        melhores(resTempo[c], 0.005, tempo);  /* mesmo valor com 2 casas = empate */
        printf("%-11s | %-20s | %-20s | %s\n", nomesResumo[c], comp, mov, tempo);
    }
    printf("\n");
}

int main(void){
    int c, m, r, rodadas;
    double t;

    srand((unsigned) time(NULL));

    validacao();

    for(c = 0; c < N_CENARIOS; c++){
        rodadas = (c == 2) ? RODADAS_ALEATORIO : 1;

        for(m = 0; m < N_METODOS; m++){
            resComp[c][m] = resTroca[c][m] = resMov[c][m] = resTempo[c][m] = 0;
        }

        for(r = 0; r < rodadas; r++){
            geraNumero(vetorBase, TAM, c + 1);      /* vetor novo a cada rodada */

            for(m = 0; m < N_METODOS; m++){
                memcpy(vetorTeste, vetorBase, sizeof(vetorBase)); /* mesma copia para todos */
                zeraContadores();
                t = executa(m, vetorTeste, TAM);

                if(!estaOrdenado(vetorTeste, TAM)){
                    printf("ERRO: %s nao ordenou o vetor!\n", nomes[m]);
                }

                resComp[c][m]  += comparacoes;
                resTroca[c][m] += trocas;
                resMov[c][m]   += movimentacoes;
                resTempo[c][m] += t;
            }
        }

        for(m = 0; m < N_METODOS; m++){             /* media (no ordenado/invertido divide por 1) */
            resComp[c][m]  /= rodadas;
            resTroca[c][m] /= rodadas;
            resMov[c][m]   /= rodadas;
            resTempo[c][m] /= rodadas;
        }

        imprimeTabela(c);
    }

    imprimeResumo();
    return 0;
}