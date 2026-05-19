#include <stdio.h>

int main(){
//      Desenvolva um programa simule uma calculadora de tarifas de transporte. O
// usu´ario deve informar um c´odigo para o tipo de ve´ıculo:
// • 1- Motocicleta
// • 2- Carro
// • 3- Caminh˜ao
// • 4- ˆ Onibus
// Utilize switch-case para exibir o valor do ped´agio correspondente para cada
// ve´ıculo. Caso o c´odigo seja inv´alido, informe ao usu´ario.
// C´odigo Tipo de Ve´ıculo Ped´agio (R$)
// 1 -Motocicleta | 5,00
// 2 - Carro | 12,50
// 3 - Caminh˜ao | 25,00
// 4 - ˆ Onibus | 18,0
    int codigo;
    printf("Digite o tipo de veiculo\n");
    printf("1 - Motocicleta\n");
    printf("2 - Carro\n");
    printf("3 - Caminhão\n");
    printf("4 - Ônibus\n");
    scanf("%i", &codigo);
    switch(codigo){
        case 1:
            printf("Pedágio para Motocicleta: R$ 5,00\n");
            break;
        case 2:
            printf("Pedágio para Carro: R$ 12,50\n");
            break;
        case 3:
            printf("Pedágio para Caminhão: R$ 25,00\n");
            break;
        case 4:
            printf("Pedágio para Ônibus: R$ 18,00\n");
            break;
        default:
            printf("Erro: Código inválido. Por favor, digite um número entre 1 e 4.\n");
    }

}