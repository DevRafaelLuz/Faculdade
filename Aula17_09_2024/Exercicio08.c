/* Mude o programa anterior, escrevendo funções separadas para: 
    (a) alocar o vetor e preenchê-lo com zeros; 
    (b) preencher o vetor; e 
    (c) imprimir o vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, *v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    v = (int*) calloc(tamanho, sizeof(int));

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