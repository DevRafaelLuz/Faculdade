/* Faça um programa que gere uma matriz transposta (Matriz transposta é toda a matriz onde são trocadas 
    as linhas pelas colunas, ou vice-versa); */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, matriz[5][5], transposta[5][5];
    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10;
        }
    }


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            transposta[j][i] = matriz[i][j];
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("-------------\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d  ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}