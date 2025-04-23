// Escrever a função recursiva int max(int n, int *v) que retorna o maior elemento do vetor v (de n elementos).

#include <stdio.h>

int max(int n, int *v) {
    if (n == 1) {
        return v[0];
    }
   
    int maxAnterior = max(n - 1, v);
    return (v[n - 1] > maxAnterior) ? v[n - 1] : maxAnterior;
}

int main() {
    int v[] = {1, -2, 3, 4, -5};
    int n = sizeof(v) / sizeof(v[0]);
    
    printf("Maior elemento do vetor: %d\n", max(n, v));
    return 0;
}
