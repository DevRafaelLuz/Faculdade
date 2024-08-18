/* Escreva uma a função que retorne o total de vezes que um elemento, passado como argumento, aparece num vetor;
    a. int verifica (int elemento, int vetor[]); */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verifica (int elemento, int vetor[]) {
    srand(time(NULL));
    int contador = 0;

    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 21;

        if (vetor[i] == elemento) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int vetor[100];
    int resultado = verifica(10, vetor);

    printf("%d", resultado);

    return 0;
}