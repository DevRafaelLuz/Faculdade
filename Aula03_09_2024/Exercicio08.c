/* Escreva um programa que leia 10 números inteiros e calcule a soma dos elementos de índice par e a multiplicação 
    dos elementos que se encontram em posições de índice ímpar. Informe os resultados do processamento; */

#include <stdio.h>

int main() {
    int vetor[10], i, soma = 0, multiplicacao = 1;

    for (i = 0; i < 10; i++) {
        printf("Digite uma valor para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            soma += *(vetor + i);
        } else {
            multiplicacao *= *(vetor + i);
        }
    }

    printf("Resultado da soma: %d\n", soma);
    printf("Resultado da multiplicacao: %d", multiplicacao);

    return 0;
}