/* Escreva uma função que receba dois vetores de inteiros e seus tamanhos como parâmetros, e copie o conteúdo de um vetor 
    para o outro usando ponteiros. A função deve criar uma cópia exata do vetor original. */

#include <stdio.h>

void copiarVetor(int *vet1, int *vet2, int tamanho) {
    int i, aux[tamanho];

    for (i = 0; i < tamanho; i++) {
        *(aux + i) = *(vet1 + i);
    }

    for (i = 0; i < tamanho; i++) {
        *vet1++ = *vet2;
        *vet2++ = *(aux + i);
    }
}

void exibeVetor(int *vet, int tamanho, int numeroVetor) {
    for (int i = 0; i < tamanho; i++) {
        printf("Vetor%d[%d] = %d\n", numeroVetor, i, *(vet + i));
    }
}

int main() {
    int vetor1[] = {1, 3, 5, 7, 9};
    int vetor2[] = {0, 2, 4, 6, 8};
    int tamanho = 5;

    printf("Vetores Originais:\n");
    printf("-------------\n");
    exibeVetor(vetor1, tamanho, 1);    
    printf("-------------\n");
    exibeVetor(vetor2, tamanho, 2);

    printf("-------------\n");

    copiarVetor(vetor1, vetor2, tamanho);

    printf("Vetores Invertidos:\n");
    exibeVetor(vetor1, tamanho, 1); 
    printf("-------------\n");
    exibeVetor(vetor2, tamanho, 2);
    printf("-------------");

    return 0;
}