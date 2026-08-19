#include <stdio.h>
#include <math.h>

typedef struct {
    float a,b,c,x1,x2;
}Valor;

Valor entrada(Valor a); 
Valor saida(Valor a); 
Valor equacao(Valor a); 
int main(){   
    Valor a; 
    a = equacao(entrada(a));
    saida(a);
    
    return 0;
}
Valor entrada(Valor a){
    printf("Digite o valor de A\n");
    scanf("%f",&a.a);
    printf("Digite o valor de B\n");
    scanf("%f",&a.b);
    printf("Digite o valor de C\n");
    scanf("%f",&a.c);
    return a;
} 

Valor equacao(Valor a){
    float delta = (a.b*a.b) -4*a.a*a.c;
    a.x1 = (-a.b + sqrt(delta)) / (2*a.a);
    a.x2 = (-a.b - sqrt(delta)) / (2*a.a);
    return a;
}
Valor saida(Valor a){
    printf("X1 = %f\n",a.x1);
    printf("X2 = %f\n",a.x2);
}