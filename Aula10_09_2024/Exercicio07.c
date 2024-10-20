/* Escreva uma função que receba um vetor de inteiros ordenado e seu tamanho, juntamente com um valor inteiro a ser pesquisado.
    A função deve usar uma pesquisa binária com ponteiros para determinar se o valor está presente no vetor e retornar um ponteiro 
    para a posição do valor ou NULL se não estiver presente. */

#include <stdio.h>

int* pesquisaBinaria(int *vet, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (*vet == valor) {
            return vet;
        }
        vet++;
    }

    return NULL;
}

int main() {
    int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = 10;
    int* resultado = pesquisaBinaria(vetor, tamanho, 5);

    if (resultado != NULL) {
        printf("Valor encontrado na posicao: %p", resultado);
    } else {
        printf("Valor nao encontrado");
    }

    return 0;
}