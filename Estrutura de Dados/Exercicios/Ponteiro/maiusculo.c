#include <stdio.h>
#include <stdlib.h>
void paraMaiusculas(char *texto);

int main(void){
    char texto[50];
    printf("Digite um texto\n");
    // WINDOWS gets(texto);
    fgets(texto, 50, stdin);

    paraMaiusculas(texto);
    printf("Palavra Maiuscula= %s\n",texto);
    return 0;
}
void paraMaiusculas(char *texto){
    for (int i = 0;texto[i]!='\0';i++)
        if(texto[i]>='a' && texto[i]<= 'z')
            texto[i] = texto[i]-32;

}