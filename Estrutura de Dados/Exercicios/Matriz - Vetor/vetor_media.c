#include <stdio.h>

int main(int argc, char const *argv[])
{
    float final=5,n[5],media;
    for (int i = 0; i < final; i++)
    {
        printf("Digite %io numeros\n",i+1);
        scanf("%f",&n[i]);
        media += n[i];
    }
    printf("O media é %.2f\n", media/final);
    return 0;
}
