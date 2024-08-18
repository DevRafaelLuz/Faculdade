// Programa que calcula a soma, a subtração e a multiplicação entre duas matrizes de mesmo tamanho;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i, j, matriz1[5][5], matriz2[5][5];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;
        }
    }

    printf("--- SOMA DAS MATRIZES ---\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d  ", matriz1[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }

    printf("--- SUBTRACAO DAS MATRIZES ---\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d  ", matriz1[i][j] - matriz2[i][j]);
        }
        printf("\n");
    }

    printf("--- MULTIPLICACAO DAS MATRIZES ---\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d  ", matriz1[i][j] * matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}