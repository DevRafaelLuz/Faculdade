/* Faça um programa que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo números inteiros. 
    Em seguida escreva a soma dos elementos de cada linha e se a soma dos elementos é par ou impar. Por fim 
    escreva a soma dos elementos de cada coluna e se a soma dos elementos é par ou impar; */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, MAT[10][15], somaLinha = 0, somaColuna = 0;
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            MAT[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            somaLinha += MAT[i][j];            
        }
        if (somaLinha % 2 == 0) {
            printf("Soma da linha %d: %d, eh par.\n", i + 1, somaLinha);
        } else {
            printf("Soma da linha %d: %d, eh impar.\n", i + 1, somaLinha);
        }

        somaLinha = 0;
    }

    printf("-------------------------------\n");

    for (i = 0; i < 15; i++) {
        for (j = 0; j < 10; j++) {
            somaColuna += MAT[j][i];            
        }
        if (somaColuna % 2 == 0) {
            printf("Soma da coluna %d: %d, eh par.\n", i + 1, somaColuna);
        } else {
            printf("Soma da coluna %d: %d, eh impar.\n", i + 1, somaColuna);
        }

        somaColuna = 0;
    }

    return 0;
}