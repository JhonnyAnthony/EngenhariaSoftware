#include <stdio.h>


void primeiraMaiuscula(char *nome);
int main(){
    // Implemente um programa em C ANSI que leia um nome completo
    // armazenado em uma string. O programa deve criar a função 
    // void primeiraMaiuscula(char *nome) que receba a string por 
    // referência (ponteiro) e altere o primeiro caractere de cada 
    // palavra para letra maiúscula, apenas se esse caractere estiver em 
    // letra minúscula. Considere que as palavras do nome são separadas por
    // espaço. As demais letras de cada palavra não devem ser modificadas. 
    // Por exemplo, se o usuário digitar: manfred heil junior o programa
    // deverá retornar: Manfred Heil Junior
    char nome[100];
    printf("Digite um nome completo\n");
    fgets(nome, 100, stdin);
    primeiraMaiuscula(nome);
    printf("Nome com primeira letra de cada palavra em maiúscula: %s", nome);
    return 0;
}

void primeiraMaiuscula(char *nome){
    int i =0;
    if (nome[i] >= 'a' && nome[i] <= 'z') {
        nome[i] = nome[i] - 32; 
    }
    else{
        printf("O primeiro caractere não é uma letra minúscula.\n");
    }
}