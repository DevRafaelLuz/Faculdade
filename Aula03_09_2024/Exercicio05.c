/* Escreva uma função que recebe dois arrays de inteiros (array de origem e array de destino) e seu tamanho como parâmetros. 
    A função deve copiar os elementos do array de origem para o array de destino usando aritmética de ponteiros. */

#include <stdio.h>

void copiaValores(int *origem, int *destino, int tamanho) {
    int *ponteiro = origem;

    for (int i = 0; i < tamanho; i++) {
        *(destino + 1) = *ponteiro;
        ponteiro++;
    }

}

int main() {
    int tamanho = 5, origem[] = {1, 2, 3, 4, 5}, destino[tamanho], i;

    copiaValores(origem, destino, tamanho);

    for (i = 0; i < tamanho; i++) {
        printf("Vetor destino[%d] = %d\n", i, destino[i]);
    }

    return 0;
}