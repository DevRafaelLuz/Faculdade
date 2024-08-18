// Crie uma função que calcule o modulo de um número;

#include <stdio.h>

int modulo(int num) {
    if (num < 0) {
        return -num;
    }

    return num;
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    printf("O modulo de %d eh %d", numero, modulo(numero));

    return 0;
}