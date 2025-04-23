/* Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. 
    Agora, some mais um a cada posição do array usando o ponteiro; */

#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int *ponteiro = array;

    for (int i = 0; i < 5; i++ ) {        
        printf("Array[%d] = %d\n", i, (*ponteiro++ + 1));
    }

    return 0;
}