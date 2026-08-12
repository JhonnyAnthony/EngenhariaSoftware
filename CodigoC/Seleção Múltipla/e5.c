#include <stdio.h>

int main(){
//      Desenvolva um programa simule o pagamento de uma compra. O programa deve
// seguir os seguintes requisitos:
// • O programa deve pedir ao usu´ario para inserir o valor total da compra.
// • O programa deve entao permitir que o usuario escolha uma forma de pagamento
// entre as opcoes (Utilizar SWITCH/CASE):
// • Credito
// • Debito
// • Pix
// • Boleto
// Comportamento esperado para cada forma de pagamento:
// • Credito: Pergunte ao usu´ario o n´umero de parcelas. O programa deve
// calcular o valor de cada parcela e mostrar na sa´ıda padr˜ao.
// • Debito: O pagamento ´e feito `a vista, ou seja, o valor total sera pago integralmente.
// • Pix: O usuario recebe 5% de desconto no valor total.
// • Boleto: O usuario paga o valor total com 2% de taxa adicional.
// O valor total a ser pago deve ser exibido na sa´ıda padr˜ao considerando as
// condicoes acima
    float valorCompra;
    int formapag,parcelas;
    printf("Digite o valor total da compra:\n");
    scanf("%f", &valorCompra);
    printf("Escolha a forma de pagamento:\n");
    printf("1 - Crédito\n");
    printf("2 - Débito\n");
    printf("3 - Pix\n");
    printf("4 - Boleto\n");
    scanf("%i", &formapag);
    switch(formapag){
        case 1:
            printf("Digite o número de parcelas:\n");
            scanf("%i",&parcelas);
            if(parcelas>0){
                printf("Valor de cada parcela: R$ %.2f\n",valorCompra/parcelas);
            }
            break;
        case 2:
            printf("Valor total a ser pago: R$ %.2f\n",valorCompra);
            break;
        case 3:
            printf("Valor a ser pago com desconto será de R$ %.2f \n",valorCompra*0.95);
            break;
        case 4:
            printf("Valor a ser pago com desconto  será de R$ %.2f \n",valorCompra*.98);
            break;
        default:
            printf("Digite numeros de 1-5\n");
            break;
    }

}
