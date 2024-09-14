/* Escreva um programa que leia e mostre um vetor de 10 elementos inteiros. Em seguida, conte quantos valores 
    pares existem no vetor, exibindo no vídeo; */

#include <stdio.h>

int main() {
    int vetor[10], contador = 0, i;
    int *ponteiro = vetor;

    for (i = 0; i < 10; i++) {
        printf("Informe um numero para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        if (*ponteiro++ % 2 == 0) {
            contador++;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("Valor do vetor[%d]: %d\n", i, *(vetor + i));
    }

    printf("Quantidades de valores pares no vetor: %d", contador);

    return 0;
}