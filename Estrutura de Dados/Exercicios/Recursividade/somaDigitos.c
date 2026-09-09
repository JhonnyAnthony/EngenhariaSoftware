#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int x);

int main(void){
    //Implemente apenas a função int somaDigitos(int x) que retorna a soma dos digtos de x 
    // de forma recursiva (Exemplo.: 538 ->  5+ 3+ 8 = 16)
    int n;

    printf("Digite um numero para a recursividade\n");
    scanf("%i",&n);
    printf("Recursividade de %i é %i\n",n,somaDigitos(n));
}

int somaDigitos(int x){
    if (x<10) return x;
    return (x%10) + somaDigitos(x/10);
}