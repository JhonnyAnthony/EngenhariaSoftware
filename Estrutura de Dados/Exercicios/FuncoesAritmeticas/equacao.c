#include <stdio.h>
#include <math.h>

float x1,x2;

void equacao(float a, float b, float c); 
int main(){
    float na, nb, nc;

    printf("Digite o valor de A\n");
    scanf("%f",&na);
    printf("Digite o valor de B\n");
    scanf("%f",&nb);
    printf("Digite o valor de C\n");
    scanf("%f",&nc);

    equacao(na,nb,nc);

    printf("X1 = %f\n",x1);
    printf("X2 = %f\n",x2);

    return 0;
}

void equacao(float a,float b, float c){
    float delta = (b*b) -4*a*c;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
}