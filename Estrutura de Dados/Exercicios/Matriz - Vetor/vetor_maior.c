#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n[10],maior;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite %io numeros\n",i+1);
        scanf("%i",&n[i]);
        if(i == 0){
            maior = n[i];
        }else{
            if(n[i]>maior) maior=n[i];
        }
    }
    printf("O maior numero e %i\n", maior);
    return 0;
}
