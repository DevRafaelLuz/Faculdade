// Escrever a função recursiva int fib(int n), que retorna o n-ésimo número da sequência de Fibonacci

#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numero %d da sequencia de Fibonacci eh: %d", num, fib(num));

    return 0;
}