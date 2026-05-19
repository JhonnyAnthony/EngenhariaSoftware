#include <stdio.h>

int main(){
//Faca um programa que, a partir de dois numeros, pergunte ao usuario qual a
// operacao que ele deseja (+,-, / ou *) e mostre o resultado dessa operacao com
// os dois numeros na tela. A divisao podera ser feita somente se o 2º numero nao for
// zero (Aqui a estrutura if deve ser utilizada)
    printf("Digite qual operação deseja realizar:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    int op;
    scanf("%d", &op);
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    switch(op){
        case 1:
            printf("Resultado: %f\n",num1 + num2);
            break;
        case 2:
            printf("Resultado: %f\n",num1 - num2);
            break;
        case 3:
            printf("Resultado: %f\n",num1 * num2);
            break;
        case 4:
            if(num2 != 0){
                printf("Resultado: %f\n",num1 / num2);
            }else{
                printf("Erro: Divisão por zero não é permitida.\n");
            } 
            break;
        default:
            printf("Erro: Número inválido. Por favor, digite um número entre 1 e 4.\n");   
    }
    return 0;
}