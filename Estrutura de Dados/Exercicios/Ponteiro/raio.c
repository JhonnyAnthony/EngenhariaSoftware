#include <stdio.h>


void calculo(float r,int pi,float *area);
int main(void){
    float r,PI = 3.141592,area;
    
    printf("Digite o raio para calcular a área.\n");
    scanf("%f",&r);

    calculo(r,PI,&area);
    printf("A área é %2.f\n",area);
    return 0;
}
void calculo(float r,int pi,float *area){
    *area = pi * (r*r);
}