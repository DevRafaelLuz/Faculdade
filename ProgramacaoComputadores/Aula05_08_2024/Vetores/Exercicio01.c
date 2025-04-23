// Implemente um programa que apresenta todos os itens de índice par de um vetor;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vetor[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {        
        vetor[i] = rand() % 101;

        if (vetor[i] % 2 == 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}