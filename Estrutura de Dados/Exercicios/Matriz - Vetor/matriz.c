#include <stdio.h>

int main(void)
{
    //soma matriz 3x3   
    int matriz[3][3],soma=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            printf("Digite a Matriz [%i][%i]: ",i,j);
            scanf("%i",&matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("A soma da matriz é %i\n",soma);
    return 0;
}
