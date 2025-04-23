/* Escrever um programa para ler uma frase qualquer do teclado e imprimir, esta mesma frase, um 
    caractere por vez usando aritmética de ponteiros e indireção; */

#include <stdio.h>

int main() {
    char frase[200];
    char *ponteiro = frase;

    printf("Digite uma frase: ");
    gets(frase);

    for (int i = 0; i < 200; i++) {
        if (*ponteiro != '\0') {
            printf("%c  ", *ponteiro++);
        } else {
            break;
        }        
    }

    return 0;
}
