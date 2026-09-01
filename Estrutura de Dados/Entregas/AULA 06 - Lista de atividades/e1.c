#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular o n-ésimo número da série de Pitágoras
int serie_pitagoras(int n); 

int main() {
    // Construa um algoritmo que use recursividade 
    // para resolver o problema matemático da série de Pitágoras, 
    // sabendo que a série é 1, 3, 6, 10, 15, 21, ...
    int termos;
    
    printf("Digite o número de termos da série de Pitágoras: ");
    scanf("%d", &termos);
    if (termos != 1 && termos <= 0) {
        printf("Entrada inválida. Digite um número inteiro positivo.\n");
        return 1;
    }
    
    printf("Série de Pitágoras com %d termos:\n", termos);
    for (int i = 1; i <= termos; i++) {
        printf("%d ", serie_pitagoras(i));
    }
    printf("\n");
    
    return 0;
}
int serie_pitagoras(int n) {
    if (n <= 0) {
        return 0; // Caso base para n inválido
    }
    if (n == 1) {
        return 1; // Caso base: primeiro termo
    }
    return serie_pitagoras(n - 1) + n; // Passo recursivo    
}