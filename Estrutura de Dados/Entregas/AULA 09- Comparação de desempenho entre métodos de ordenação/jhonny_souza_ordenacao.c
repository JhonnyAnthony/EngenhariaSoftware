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
#include <time.h>

#define TAM 10000

// void clock(void);
void bubble_sort(void);
int selection_sort(void);
int insert_sort(void);
void merge_sort(int *v, int inicio, int fim);
void quickSort(int *v, int inicio, int fim);
void start_merge_sort(void);
void start_quick_sort(void);


int main(void){
    bubble_sort();
    selection_sort();
    insert_sort();
    start_merge_sort();
    start_quick_sort();
    return 0;
}

void tempo(double fim,double inicio){
    double tempo_ms = (double)(fim - inicio) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo de execução: %.2f ms\n", tempo_ms);
}
void clear(void){
    //PRESS ENTER TO CONTINUE
    printf("Pressione Enter para continuar...\n");
    if(getchar() == '0'){
    }
    system("clear");
}
void start_quick_sort(void){
    int v[TAM]; 
    int i; 
    clock_t inicio, fim;
    printf("\nQuick Sort\n");
    // Entrada de dados 
    for(i = 0; i < TAM; i++){ 
        v[i] = rand() % TAM;
    } 

    // Merge Sort 
    inicio = clock();
    quickSort(v, 0, TAM - 1); 
    fim = clock();
    // Saída de dados 
    printf("\nVetor ordenado:\n");    
    tempo(fim,inicio);
}

void start_merge_sort(void){
    int v[TAM]; 
    int i; 
    clock_t inicio, fim;
    printf("\nMerge Sort\n");
        // Entrada de dados 
    for(i = 0; i < TAM; i++){ 
        v[i] = rand() % TAM;
    } 
    inicio = clock();
        // Merge Sort 
    
    merge_sort(v, 0, TAM - 1); 
    fim = clock();
    
    // Saída de dados 
    printf("\nVetor ordenado:\n"); 
    // for(i = 0; i < TAM; i++){ 
    //     printf("%i \n", v[i]); 
    // }
    tempo(fim,inicio);
}
void bubble_sort(){
    int v[TAM]; 
    int i, n, aux, troca; 
    int iteracoes = 0;
    int comparacoes = 0;
    int trocas = 0;
    clock_t inicio, fim;
    printf("\nBubble Sort\n");
    // Entrada de dados 
    for(i = 0; i < TAM; i++){ 
        v[i] = i+1;
    } 
    
    // Bubble Sort  
    n = 1; 
    troca = 1; 
    
    inicio = clock();
    while(n <= TAM && troca == 1){ 
        //contador de iterações
        troca = 0; 
        iteracoes++;
        for(i = 0; i < TAM - 1; i++){ 
            // comparações
            comparacoes++;
            if(v[i] > v[i + 1]){ 
                //contador de comparações
                troca = 1; 
 
                aux = v[i]; 
                v[i] = v[i + 1]; 
                v[i + 1] = aux; 
                //contador de trocas
                trocas++;

            } 
        } 
        
        n++; 
    } 
    fim = clock();
    printf("Iterações: %d\n", iteracoes);
    printf("Trocas: %d\n", trocas);
    printf("Comparações: %d\n", comparacoes);
    // Saída de dados 
    printf("\nVetor ordenado:\n"); 
    tempo(fim,inicio);
    // clear();
}

int selection_sort(void){ 
    printf("\nSelection Sort\n");
    
    int v[TAM]; 
    int i, j, min, aux; 
    clock_t inicio, fim;
 
    // Entrada de dados 
    for(i = 0; i < TAM; i++){ 
        v[i] = rand() % TAM;
    } 
    inicio = clock();
    // Selection Sort 
    for(i = 0; i < TAM - 1; i++){ 
 
        min = i; 
        
        for(j = i + 1; j < TAM; j++){ 
            if(v[j] < v[min]){ 
                min = j; 
            } 
        } 
        
        if(min != i){ 
            aux = v[i]; 
            v[i] = v[min]; 
            v[min] = aux; 
        } 
    } 
    fim = clock();
    
    // Saída de dados 
    printf("\nVetor ordenado:\n"); 
    // for(i = 0; i < TAM; i++){ 
    //     printf("%i \n", v[i]); 
    // } 
    tempo(fim,inicio);

    return 0; 
}

int insert_sort(void){ 
    int v[TAM]; 
    int i, j, chave; 
    clock_t inicio, fim;

    
    
    printf("\nInsertion Sort\n");
    // Entrada de dados 
    for(i = 0; i < TAM; i++){ 
        v[i] = rand() % TAM;
    } 
    
    inicio = clock();
    // Insertion Sort 
    for(i = 1; i < TAM; i++){ 
 
        chave = v[i]; 
        j = i - 1; 
        
        while(j >= 0 && v[j] > chave){ 
            v[j + 1] = v[j]; 
            j--; 
        } 
        
        v[j + 1] = chave; 
    } 
    fim = clock();
    
    // Saída de dados 
    printf("\nVetor ordenado:\n"); 
    // for(i = 0; i < TAM; i++){ 
    //     printf("%i \n", v[i]); 
    // }     
    tempo(fim,inicio);
    return 0; 
}

// Função para juntar (merge) os subvetores 
void merge(int *v, int inicio, int meio, int fim){   
    // printf("merge Sort\n");
    int i, j, k; 
    int temp[TAM];    
    i = inicio; 
    j = meio + 1; 
    k = inicio; 
    

    // Intercala os elementos 
    while(i <= meio && j <= fim){ 
        if(v[i] < v[j]){ 
            temp[k] = v[i]; 
            i++; 
        } else { 
            temp[k] = v[j]; 
            j++; 
        } 
        k++; 
    } 
 
    // Copia os elementos restantes 
    while(i <= meio){ 
        temp[k] = v[i]; 
        i++; 
        k++; 
    } 
    
    while(j <= fim){ 
        temp[k] = v[j]; 
        j++; 
        k++; 
    } 
    
    // Copia de volta para o vetor original 
    for(i = inicio; i <= fim; i++){ 
        v[i] = temp[i]; 
    }     
} 
 
// Função recursiva do Merge Sort 
void merge_sort(int *v, int inicio, int fim){ 
    int meio; 
    
    if(inicio < fim){ 
        meio = (inicio + fim) / 2; 
        merge_sort(v, inicio, meio); 
        merge_sort(v, meio + 1, fim); 
        merge(v, inicio, meio, fim); 
    } 
} 

void troca(int *a, int *b){ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
// Função de particionamento 
int particiona(int *v, int inicio, int fim){ 
    int pivo, i, j; 
    pivo = v[fim]; 
    i = inicio - 1; 
    
    for(j = inicio; j < fim; j++){ 
            if(v[j] < pivo){ 
                i++; 
                troca(&v[i], &v[j]); 
            } 
        } 
        
        troca(&v[i + 1], &v[fim]); 
        
    
        return i + 1; 
} 
 
// Função recursiva do Quick Sort 
void quickSort(int *v, int inicio, int fim){ 
    int posPivo; 
 
    if(inicio < fim){ 
        posPivo = particiona(v, inicio, fim); 
 
        quickSort(v, inicio, posPivo - 1); 
        quickSort(v, posPivo + 1, fim); 
    }     

} 
 