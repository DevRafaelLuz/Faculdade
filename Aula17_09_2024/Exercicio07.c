/* Escreva um programa que aloque dinamicamente um vetor ''v'' e o preencha com ''v[i] = 100*i'', sendo que o número 
    de elementos do vetor é lido do teclado. A área de memória alocada deve ser definida em função do tamanho do vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, *v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    v = (int*) malloc(tamanho * sizeof(int));

    if (v == NULL) {
        printf("Erro na alocacao de memoria!");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        v[i] = 100 * i;
        printf("Vetor[%d] = %d\n", i, v[i]);
    }

    free(v);

    return 0;
}