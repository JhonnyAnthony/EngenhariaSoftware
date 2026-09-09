#include <stdio.h>
#include <stdlib.h>

int contarPares(int v[], int n);

int main(){
    // 2. Implemente uma função recursiva em C ANSI que calcule o número de elementos pares em um vetor de inteiros. 
    // int contarPares(int v[], int n) {  // Sua função aqui } 
    // A função deve retornar a quantidade de elementos pares encontrados. 
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int quantidadePares = contarPares(v, n);
    printf("Quantidade de elementos pares: %d\n", quantidadePares);
    
    return 0;
}

int contarPares(int v[], int n) { 
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            return 1 + contarPares(v + 1, n - 1); 
        }
        else{
            return contarPares(v + 1, n - 1);
        }
    }
} 