#include <stdio.h>
int main(void)
{
    //construa um programa que solicite dois numeros inteiros ao usuario
    // exiba apenas os numeros pares estritamente entre eles
    // sem incluir os limites

    int num1,num2 ;
    printf("Digite dois numeros inteiros\n");
    scanf("%i%i",&num1,&num2);
    if(num1<num2){
        for(int i = num1+1; i<num2; i++){
            if(i%2 == 0){
                printf("%i\n",i);
            }
        }
    }
    else{
            for(int i = num1-1; i>num2; i--){
            if(i%2 == 0){
                printf("%i\n",i);
            }
    } 
}   
    return 0;
}
