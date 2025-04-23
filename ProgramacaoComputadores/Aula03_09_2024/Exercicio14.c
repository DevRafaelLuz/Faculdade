/* Escreva uma função que recebe uma string e um caractere como parâmetros. A função deve remover todas as 
    ocorrências desse caractere na string. */

#include <stdio.h>

void removerCaracteres(char *str, char *a) {
    while (*str != '\0') {
        if (*str == *a) {
            *str = ' ';
        }

        str++;
    }
}

int main() {
    char string[100], a;

    printf("Digite uma string: ");
    gets(string);
    fflush(stdin);
    printf("Digite o caracter a ser removido: ");
    scanf("%c", &a);
    fflush(stdin);

    removerCaracteres(string, &a);

    printf("String modificada: %s", string);

    return 0;
}