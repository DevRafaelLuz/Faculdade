/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, 
    compare seus endereços e exiba o conteúdo do maior endereço. */

#include <stdio.h>

int main() {
    int valor1, valor2, *a, *b;

    printf("Digite um numero: ");
    scanf("%d", &valor1);
    printf("Digite outro numero: ");
    scanf("%d", &valor2);

    a = &valor1;
    b = &valor2;

    if (&valor1 > &valor2) {
        printf("Valor1: %d", *a);
    } else {
        printf("Valor2: %d", *b);
    }

    return 0;
}