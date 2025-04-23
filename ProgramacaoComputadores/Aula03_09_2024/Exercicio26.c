/* Escreva uma função que recebe uma string e uma substring como parâmetros. A função deve retornar um ponteiro 
    para a primeira ocorrência da substring na string ou NULL se a substring não for encontrada. */

#include <stdio.h>
#include <string.h>

char* encontrarSubstring(char* str, char* substr) {
    char* result = strstr(str, substr);
    return result;
}

int main() {
    char* string = "Ola, mundo!";
    char* substring = "mundo";
    char* stringEncontrada = encontrarSubstring(string, substring);

    if (stringEncontrada) {
        printf("Substring encontrada: %s\n", stringEncontrada);
    } else {
        printf("Substring nao encontrada.\n");
    }

    return 0;
}