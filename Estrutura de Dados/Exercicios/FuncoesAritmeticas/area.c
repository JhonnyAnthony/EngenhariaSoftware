#include <stdio.h>
// Calcular a área de um circulo
// calculo A = π × raio².
int main(){
    float area, PI, raio; 
    PI = 3.14;
    printf("Digite o raio\n");
    scanf("%f",&raio);
    area = PI * raio * raio;
    printf("Área %.2f\n",area);
    return 0;
}