/* Escreva uma função que recebe dois arrays de inteiros do mesmo tamanho como parâmetros. A função deve 
    calcular o produto escalar dos dois arrays, ou seja, a soma dos produtos dos elementos correspondentes 
    usando aritmética de ponteiros. */

#include <stdio.h>

float calcularProdutoEscalar(int *arr1, int *arr2) {
    float produto;

    for (int i = 0; i < 5; i++) {
        produto += *arr1++ * *arr2++;
    }

    return produto;
}

int main() {
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {2, 4, 6, 8, 10};

    printf("O resultado do produto escalar dos arrays eh: %.1f", calcularProdutoEscalar(array1, array2));

    return 0;
}