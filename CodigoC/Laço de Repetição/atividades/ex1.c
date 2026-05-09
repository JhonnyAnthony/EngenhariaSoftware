#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    while(n1 > n2 || n2 > n1){
        printf("Os números são diferentes. Digite novamente: ");
        scanf("%d", &n1);
        scanf("%d", &n2);
    }
    printf("Os números são iguais.\n");
    
    return 0;
}
