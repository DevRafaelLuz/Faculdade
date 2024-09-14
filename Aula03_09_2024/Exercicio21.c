/* Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A função deverá preencher os 
    elementos de vetor com esse valor. Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros. Crie uma 
    função que receba como parâmetro um vetor e o imprima. Não utilize índices para percorrer o vetor, apenas aritmética de 
    ponteiros. */

#include <stdio.h>

void preencherVetor(int *vetor, int valor) {
    for (int i = 0; i < 10; i++) {
        *vetor++ = valor;
    }
}

void imprimirVetor(int *vetor) {
    for (int i = 0; i < 10; i++) {
        printf("Vetor[%d]: %d\n", i, *vetor++);
    }
}

int main() {
    int vetor[10];

    preencherVetor(vetor, 7);
    imprimirVetor(vetor);

    return 0;
}