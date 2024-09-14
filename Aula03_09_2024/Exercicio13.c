// Crie uma função que determine o tamanho de um vetor, sem que seja passado o tamanho do mesmo;

#include <stdio.h>

void obterTamanhoVetor(int *vet, int *tamanho) {
    while (*vet != -1) {
        *tamanho += 1;
        vet++;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, -1}; // -1 valor sentinela
    int tamanho = 0;

    obterTamanhoVetor(vetor, &tamanho);

    printf("O vetor possui um a tamanho de %d indices.", tamanho);

    return 0;
}