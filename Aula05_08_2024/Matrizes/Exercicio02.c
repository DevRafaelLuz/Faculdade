/* Implemente um programa que apresenta os dados de uma matriz na ordem inversa que foram inseridos; */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int i, j, matriz[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 11;
        }
    }

    for (i = 9; i >= 0; i--) {
        for (j = 9; j >= 0; j--) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}