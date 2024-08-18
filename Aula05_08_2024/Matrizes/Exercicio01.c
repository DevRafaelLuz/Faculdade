/* Implemente um programa que apresenta todos os itens de índice par de uma matriz; */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));

    int i, j, matriz[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 11;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("%d  ", matriz[i][j]);
            }            
        }
        printf("\n");
    }

    return 0;
}