/* Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um programa que leia N valores inteiros, 
    imprima o array com k elementos por linha, e o maior elemento. O valor de k também deve ser fornecido pelo usuário; */

#include <stdio.h>

int obtemMaiorValor(int *arr) {
    int aux = *arr;

    for (int i = 0; i < 10; i++) {
        if (*arr++ > aux) {
            aux = *arr;
        }
    }

    return aux;
}

void imprimirArray(int *arr, int k) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", *arr++);
        if ((i + 1) % k == 0) {
            printf("\n");
        }
    }

    if (10 % k != 0) {
        printf("\n");
    }
}

int main() {
    int array[10], k;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Digite uma valor para k: ");
    scanf("%d", &k);

    printf("Array:\n");
    imprimirArray(array, k);

    printf("Maior numero do array eh: %d", obtemMaiorValor(array));

    return 0;
}