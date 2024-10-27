/* Faça um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação 
    dinâmica de memória CALLOC:
        1. Faça um loop e verifique se o vetor contem realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
        2. Atribua para cada elemento do vetor o valor do seu índice junto a este vetor.
        3. Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int*) calloc(1500, sizeof(int));
    int contador = 0, i;

    for (i = 0; i < 1500; i++) {
        if (*(vetor + i) == 0) {
            contador++;
        }
    }

    printf("O vetor possui %d valores.", contador);

    for (i = 0; i < 1500; i++) {
        *(vetor + i) = i;
    }

    printf("\n10 Primeiros valores do vetor:\n");
    for (i = 0; i < 1500; i++) {
        if (i >= 0 && i < 10) {
            printf("%d ", *(vetor + i));
        }
    }

    printf("\n10 Ultimos valores do vetor:\n");
    for (i = 0; i < 1500; i++) {
        if (i > 1488 && i < 1500) {
            printf("%d ", *(vetor + i));
        }
    }

    free(vetor);

    return 0;
}