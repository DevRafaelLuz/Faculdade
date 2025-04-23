/* Escreva uma função que recebe uma string e dois caracteres como parâmetros. A função deve substituir 
    todas as ocorrências do primeiro caractere pelo segundo caractere na string. */

#include <stdio.h>

void substituirCaracteres(char *str, char *a, char *b) {
    while (*str != '\0') {
        if (*str == *a) {
            *str = *b;
        }

        str++;
    }
}

int main() {
    char string[100], a, b;
    char *ponteiro = string;

    printf("Digite uma string: ");
    gets(string);
    fflush(stdin);
    printf("Digite o caracter a ser substituindo: ");
    scanf("%c", &a);
    fflush(stdin);
    printf("Digite o caracter que ira substituir: ");
    scanf("%c", &b);

    substituirCaracteres(ponteiro, &a, &b);

    printf("String modificada: %s", string);

    return 0;
}