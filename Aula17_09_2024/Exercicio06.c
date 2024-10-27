/* Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memoria. 
    Em seguida, leia do usuário seus valores e imprima o vetor lido; */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    printf("Digite valores para: \n");
    for (i = 0; i < tamanho; i++) {
        printf("Vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tamanho; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}