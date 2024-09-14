/* Escreva uma função que conta o número de palavras em uma string fornecida. 
    Considere que as palavras são separadas por espaços em branco. */

#include <stdio.h>

void contaNumeroDePalavras(char *str) {
    int palavras = 0;

    while (*str != '\0') {
        if (*str == ' ') {
            palavras++;
        }
        str++;
    }

    printf("Numeros de palavras: %d", palavras + 1);
}

int main() {    
    char string[100];

    printf("Digite uma string: ");
    gets(string);

    contaNumeroDePalavras(string);

    return 0;
}