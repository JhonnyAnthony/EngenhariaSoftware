#include <stdio.h>

void fatorial(int n,double *fat);

int main(){
    // Construa um programa em C ANSI que leia um inteiro positivo n e 
    // calcule o fatorial usando uma função void fatorial(int n, double *fat) 
    // que grave o resultado em *fat, validando n >= 0 antes do cálculo.
    int n;
    double fat;
    printf("Digite um numero inteiro positivo\n");
    scanf("%i",&n);
    fatorial(n,&fat);
    printf("Fatorial: %f\n",fat);
}
void fatorial(int n,double *fat){
    if (n < 0) {
        printf("Numero não positivo\n");
        // break;
    }
    *fat = 1.0;
    for (int i = n; i > 0; i--) {
        *fat = *fat * i;
    }

}