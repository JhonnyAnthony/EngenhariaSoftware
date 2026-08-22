#include <stdio.h>

int main(){
    int matriz[2][2];
    printf("Escreva os numeros\n");
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("[%i][%i]: ",i,j);
            scanf("%i",&matriz[i][j]);
            printf("",matriz[i][j]);
        }
    }
    return 0;
}