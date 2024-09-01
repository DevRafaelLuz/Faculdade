// Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>

int main() {
    int valor1, valor2;

    if (&valor1 > &valor2) {
        printf("Valor1: %p", &valor1);
    } else {
        printf("Valor2: %p", &valor2);
    }

    return 0;
}