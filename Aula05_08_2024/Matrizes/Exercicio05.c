/* Faça um programa que construa uma matriz 50 por 50 de números reais e depois de construída, colocar o conteúdo 
    de sua diagonal principal dentro de um vetor e depois do vetor montado, imprimir o vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float matriz[50][50], vetor[50];
    srand(time(NULL));
    int i, j;

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            matriz[i][j] = (float)rand() / RAND_MAX * 20;
        }
    }

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            vetor[i] = matriz[i][i];
        }
    }

    for (i = 0; i < 50; i++) {
        printf("%.1f  ", vetor[i]);
    }

    return 0;
}