#include <stdio.h> 

int fatorial(int n);


int main(void){ 

    int numero; 

    printf("Digite um numero: "); 

    scanf("%i", &numero); 
    if (numero < 1 || numero > 12)  printf("Nú mero inválido\n");
    else printf("Fatorial: %d\n", fatorial(numero)); 
    return 0; 

} 


int fatorial(int n){ 
    if(n == 1) return 1; 
    return n * fatorial(n - 1); 
} 