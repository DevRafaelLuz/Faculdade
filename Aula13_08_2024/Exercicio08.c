// Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N.

#include <stdio.h>

int contarDigito(int N, int K) {
    if (N == 0) {
        return 0;
    } else {
        int ultimoDigito = N % 10;
        int resto = N / 10;
        
        if (ultimoDigito == K) {
            return 1 + contarDigito(resto, K);
        } else {
            return contarDigito(resto, K);
        }
    }
}

int main() {
    int N = 762021192;
    int K = 2;

    printf("O digito %d ocorre %d vezes no numero %d\n", K, contarDigito(N, K), N);
    return 0;
}