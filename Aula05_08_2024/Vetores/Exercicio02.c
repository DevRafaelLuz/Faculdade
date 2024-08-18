// Implemente um programa que apresenta os dados de um vetor na ordem inversa que foram inseridos;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vetor[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {        
        vetor[i] = rand() % 101;
        printf("%d  ", vetor[i]);
    }

    printf("\n");

    for (int j = 9; j >= 0; j--) {
        printf("%d  ", vetor[j]);
    }

    return 0;
}