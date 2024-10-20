/* Escreva uma função que encontre o maior elemento em um vetor de inteiros usando ponteiros. A função 
    deve retornar o valor do maior elemento encontrado. */

#include <stdio.h>

int obtemMaiorElemento(int *vet) {
    int maior = *vet;

    for (int i = 0; i < 10; i++) {
        if (*vet++ > maior) {
            maior = *vet;
        }
    }

    return maior;
}

int main() {
    int vetor[10] = {10, 26, 45, 37, 36, 74, 12, 30, 89, 16};
    int *ponteiro = vetor;

    printf("O maior elemento do vetor eh: %d", obtemMaiorElemento(ponteiro));

    return 0;
}