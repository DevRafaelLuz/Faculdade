/* Faca um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. 
    Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são  ímpares; */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*) calloc(tamanho, sizeof(int));

    printf("digite valores para: \n");
    for (i = 0; i < tamanho; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Ha %d numeros pares.\n", pares);
    printf("Ha %d numeros impares.", impares);

    free(vetor);

    return 0;
}