/* Faça um programa que leia um número N e:
    1. Crie dinamicamente e leia um vetor de inteiro de N posições;
    2. Leia um numero inteiro X e conte e mostre os múltiplos desse número que existem no vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int*) calloc(10, sizeof(int));
    int i, contador = 0, x;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        vetor[i] = i + 1;

        if (vetor[i] % x == 0) {
            contador++;
            printf("%d ", vetor[i]);
        }
    }

    printf("\nHa %d numeros mulitplos de %d.", contador, x);

    free(vetor);

    return 0;
}