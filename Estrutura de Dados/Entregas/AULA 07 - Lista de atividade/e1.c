#include <stdio.h>
#include <stdlib.h>
int maiorValor(int v[], int n); 

int main(void){
    // 4. Implemente uma função recursiva em C ANSI que retorne o maior elemento de um vetor de inteiros. 
    // int maiorValor(int v[], int n) {} 
    // Considere que n é o tamanho do vetor. A função deve comparar 
    // os elementos de forma recursiva e retornar o maior valor armazenado. 
    int n;
    printf("Digite o tamanho do vetor\n");
    scanf("%i",&n);
    int v[n];
    printf("Digite os elementos do vetor:\n");
    for(int i = 0;i < n; i++){
        scanf("%i", &v[i]);
    }
    printf("O maior valor é:%i\n",maiorValor(v,n));
    return 0;
}

int maiorValor(int v[], int n) { 
    if (n == 0) return 0;
    else if (v[n - 1] > maiorValor(v, n - 1)) {
        return v[n - 1];
    }
    return maiorValor(v, n - 1);
    
} 