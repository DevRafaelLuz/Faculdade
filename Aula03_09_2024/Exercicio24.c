/* Escreva uma função que verifica se uma string é um palíndromo, ou seja, se ela é lida da mesma forma da 
    esquerda para a direita e vice-versa, ignorando espaços e diferenciação entre maiúsculas e minúsculas. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ehPalindromo(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalnum(*inicio)) {
            inicio++;
        }
        while (inicio < fim && !isalnum(*fim)) {
            fim--;
        }

        if (tolower(*inicio) != tolower(*fim)) {
            return 0; 
        }

        inicio++;
        fim--;
    }

    return 1; 
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    gets(string);
    
    if (ehPalindromo(string)) {
        printf("A string eh um palindromo.\n");
    } else {
        printf("A string nao eh um palindromo.\n");
    }

    return 0;
}