#include <stdio.h>

int fatorial(int n);

int main(){
    int a;
    printf("Digite um numero de  0 a 12\n");
    scanf("%i",&a);
    if (a>= 0 && a<=12){
        printf("%i\n",fatorial(a));
    }
    else{
        printf("Numero invalido");
    }
}

int fatorial(int n){
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}