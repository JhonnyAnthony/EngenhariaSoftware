#include <stdio.h> 

 

int fatorial(int n){ 

    if(n == 0){ 

        return 1; // caso base 

    } else { 

        return n * fatorial(n - 1); // chamada recursiva 

    } 

} 

 

int main(void){ 

    int numero; 

    printf("Digite um numero: "); 

    scanf("%i", &numero); 

    printf("Fatorial: %d\n", fatorial(numero)); 

    return 0; 

} 

 