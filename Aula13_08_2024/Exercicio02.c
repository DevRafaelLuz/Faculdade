// Crie um programa que calcula o máximo divisor comum entre dois números usando a recursão.

#include <stdio.h>

int calcularMdc(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return calcularMdc(num2, num1 % num2);
    }    
}

int main() {
    int num1, num2;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    printf("O MDC de %d e %d eh: %d\n", num1, num2, calcularMdc(num1, num2));

    return 0;
}