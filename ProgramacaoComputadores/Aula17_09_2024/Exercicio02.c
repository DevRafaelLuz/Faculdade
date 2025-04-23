/* Escreva um programa que peça ao usuário para especificar o tamanho de um vetor de inteiros e, em seguida, aloque 
    dinamicamente memória para esse vetor. Preencha o vetor com números aleatórios e, em seguida, imprima os valores. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    for (i = 0; i < tamanho; i++) {
        vetor[i] = i + 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}