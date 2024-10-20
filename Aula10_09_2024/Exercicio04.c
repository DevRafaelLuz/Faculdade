/* Escreva uma função que receba um vetor de inteiros e seu tamanho como parâmetros e inverta a ordem dos elementos do 
    vetor usando ponteiros. A função deve modificar o vetor original. */

#include <stdio.h>

void inverterVetor(int *vet, int tamanho) {
    int *inicio = vet;
    int *final = vet + tamanho - 1; 

    while (inicio < final) {
        int aux = *inicio;
        *inicio = *final;
        *final = aux;

        inicio++;
        final--;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i;

    printf("Vetor Original: \n");
    for (i = 0; i < 9; i++) {
        printf("Vetor[%d] = %d\n", i, *(vetor + i));
    }

    printf("\n");    
    
    inverterVetor(vetor, 9);

    printf("Vetor Invetido: \n");
    for (i = 0; i < 9; i++) {
        printf("Vetor[%d] = %d\n", i, *(vetor + i));
    }

    return 0;
}