/* Escreva uma função que recebe uma string (ponteiro para caracteres) e dois índices como parâmetros. 
    A função deve criar uma nova string que contenha os caracteres da string original entre os índices 
    fornecidos usando aritmética de ponteiros. */

#include <stdio.h>

void criarNovaString(char *str, int *x, int *y) {
    for (int i = 0; i < 100; i++) {
        if (i >= *x && i <= *y) {
            printf("%c", *(str + i));
        }
    }
}

int main() {
    char string[100];
    char *ponteiro = string;
    int x, y;

    printf("Digite uma frase: ");
    gets(string);
    printf("Digite dois indices: ");
    scanf("%d%d", &x, &y);

    criarNovaString(ponteiro, &x, &y);

    return 0;
}