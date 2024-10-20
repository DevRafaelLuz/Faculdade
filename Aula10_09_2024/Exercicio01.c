/* Declare um vetor de 10 posições do tipo int, inicialize um ponteiro para a posição inicial do vetor, faça o ponteiro
    percorrer o vetor preenchendo estas posições com valores quaisquer lidos do teclado e depois imprima os 10 valores de trás 
    para frentes, novamente a partir do vetor; */

#include <stdio.h>

int main() {
    int vetor[10], i;
    int *ponteiro = vetor;

    for (i = 0; i < 10; i++) {
        printf("Digite um valor para o vetor[%d]: ", i);
        scanf("%d", ponteiro++);
    }

    for (i = 9; i >= 0; i--) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}