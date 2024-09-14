/* Crie um programa que contenha um array de inteiros contendo cinco elementos. Utilizando apenas aritmética de ponteiros, 
    leia esse array do teclado e imprima o dobro de cada valor lido; */

#include <stdio.h>

int main() {
    int array[5], i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d%c do array: ", i + 1, 248);
        scanf("%d", (array + i));
    }

    for (i = 0; i < 5; i++) {
        printf("Array[i] = %d\n", *(array + i) * 2);
    }

    return 0;
}