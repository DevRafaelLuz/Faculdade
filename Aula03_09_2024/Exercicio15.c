/* Escreva uma função que recebe um array ordenado de inteiros e seu tamanho, além de um inteiro que representa 
    o valor a ser procurado. A função deve realizar uma pesquisa binária para determinar se o valor está presente 
    no array e retornar um ponteiro para a posição do valor ou NULL se não estiver presente. */

#include <stdio.h>

int* pesquisaBinaria(int *array, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (*array == valor) {
            return &array[i];
            break;
        }

        array++;
    }

    return NULL;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valor;

    printf("Digite o numero a ser procurado: ");
    scanf("%d", &valor);

    int* resultado = pesquisaBinaria(array, 10, valor);

    if (resultado != NULL) {
        printf("Elemento encontrado no indice: %p", resultado);
    } else {
        printf("Elemento nao encontrado no array.");
    }

    return 0;
}