// Programa que calcula a média dos elementos da diagonal de uma matriz;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, matriz[5][5], media, soma = 0;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 11;
        }
    }

    for (i = 0; i < 5; i++) {
        soma += matriz[i][i];
    }

    media = soma / 5;

    printf("Media: %d", media);

    return 0;
}