// Crie um programa que calcula a multiplicação de dois números inteiros;

#include <stdio.h>

int multiplicacao(int valor1, int valor2) {
    return valor1 * valor2;
}

int main() {
    int numero1, numero2;

    printf("Informe um numero: ");
    scanf("%d", &numero1);
    printf("Informe outro numero: ");
    scanf("%d", &numero2);

    printf("Resultado: %d", multiplicacao(numero1, numero2));

    return 0;
}