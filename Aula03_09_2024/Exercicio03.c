/* Faça um programa C que usa a aritmética de ponteiros para acessar os elementos de um vetor de inteiros. 
    Você deverá usar a aritmética de ponteiros tanto na atribuição de valores aos elementos do vetor quando na 
    leitura dos valores armazenados nos elementos. */

#include <stdio.h>

int main() {
    int vetor[10], contador = 1, i;
    int *ponteiro;

    ponteiro = &contador;

    for (i = 0; i < 10; i++) {
        *(vetor + i) = *ponteiro;
        contador++;
    }

    for (i = 0; i < 10; i++) {
        printf("Vetor[%d] = %d\n", i, *(vetor + i));
    }

    return 0;
}