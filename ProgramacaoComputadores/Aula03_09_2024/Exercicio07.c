/* Construa um programa que leia dois números inteiros a e b, um vetor de tamanho n e exiba como resposta a 
    contagem de quantos elementos do vetor estão no intervalo fechado [a; b];  */

#include <stdio.h>

int main() {
    int tamanho = 10, contador = 0;
    int a, b, vetor[tamanho], i;

    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);

    for (i = 0; i < tamanho; i++) {
        printf("Digite um valor para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        if (*(vetor + i) >= a && *(vetor + i) <= b) {
            contador++;
        }
    }

    printf("Quantidade de elementos que estao no intervalor (%d - %d): %d", a, b, contador);

    return 0;
}