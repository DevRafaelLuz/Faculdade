/* Escrever uma função recursiva que retorna o produto dos elementos estritamente positivos de um vetor v de n elementos inteiros.
    onsiderar que v tem pelo menos um elemento > 0. */

#include <stdio.h>

int produtoPositivos(int v[], int n) {
    if (n == 1) {
        return (v[0] > 0) ? v[0] : 1;
    }

    int ultimoElemento = (v[n-1] > 0) ? v[n-1] : 1;
    return ultimoElemento * produtoPositivos(v, n-1);
}

int main() {
    int v[] = {1, -2, 3, 4, -5};
    int n = sizeof(v) / sizeof(v[0]);
    
    printf("Produto dos elementos positivos: %d\n", produtoPositivos(v, n));
    return 0;
}
