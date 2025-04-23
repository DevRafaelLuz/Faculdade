// Faça uma função recursiva que permita calcular a média um vetor de tamanho N.

#include <stdio.h>

int soma(int v[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return v[n - 1] + soma(v, n - 1);
    }
}

float media(int v[], int n) {
    if (n == 0) {
        return 0; 
    } else {
        return (float)soma(v, n) / n;
    }
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);

    printf("A media dos elementos do vetor eh: %.2f\n", media(v, n));
    return 0;
}
