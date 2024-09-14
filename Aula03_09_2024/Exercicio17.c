/* Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras, min e max, e 
    armazene nessas variáveis o valor mínimo e máximo do array; */

#include <stdio.h>

void armazenaValores(int *arr, int *min, int *max) {
    for (int i = 0; i < 10; i++) {
        if (*arr > *max) {
            *max = *arr;
        }
        if (*arr < *min) {
            *min = *arr;
        }
        
        arr++;
    }
}

int main() {
    int array[] = {15, 26, 78, 45, 21, 37, 86, 75, 42, 69};
    int min = array[0], max = array[0];

    armazenaValores(array, &min, &max);

    printf("Valor maximo = %d\n", max);
    printf("Valor minino = %d\n", min);

    return 0;
}