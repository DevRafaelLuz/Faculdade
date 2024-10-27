/* Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos e passe esse vetor para uma função 
    que vai ler os elementos desse vetor. Depois, no programa principal, o vetor preenchido deve ser impresso. Além disso, 
    antes de finalizar o programa, deve-se liberar a área de memória alocada. */

#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *vet, int valor) {
    for (int i = 0; i < valor; i++) {
        vet[i] = i + 1;
    }
}

int main() {    
    int valor;

    printf("Digite uma valor para o vetor: ");
    scanf("%d", &valor);

    int *vetor = (int*) malloc(10 * sizeof(int));

    preencheVetor(vetor, valor);

    for (int i = 0; i < valor; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}