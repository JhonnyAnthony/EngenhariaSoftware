#include <stdio.h>
int main()
{
    float area,raio;
    const float PI = 3.14;
    printf("Qual o valor do raio\n");
    scanf("%f",&raio);  
    area = raio * raio * PI;
    printf("A area do circulo é %f \n",area);
    return 0;
}
