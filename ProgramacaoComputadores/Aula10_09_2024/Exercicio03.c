/* Escreva uma função que receba dois vetores de inteiros e seus tamanhos como parâmetros, e calcule a soma desses 
    vetores elemento por elemento usando ponteiros. A função deve armazenar o resultado em um terceiro vetor. */

#include <stdio.h>

void somar(int *vet1, int *vet2, int tamanho) {
    int vetor3[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor3[i] = *vet1++ + *vet2++;
    }

    exibirTerceiroVetor(vetor3, tamanho);
}

void exibirTerceiroVetor(int *vet3, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Vetor3[%d] = %d\n", i, *vet3++);
    }
}

int main() {
    int tamanho = 5;
    int vetor1[] = {1, 3, 5, 7, 9};
    int vetor2[] = {2, 4, 6, 8, 10};

    somar(vetor1, vetor2, tamanho);

    return 0;
}