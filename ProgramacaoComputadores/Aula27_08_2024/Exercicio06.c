/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne 
    o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela. */

#include <stdio.h>

void organizaValores(int *num1, int *num2) {
    if (*num1 < *num2) {
        int auxiliar = *num1;
        *num1 = *num2;
        *num2 = auxiliar;
    }
}

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    organizaValores(&num1, &num2);

    printf("Maior valor = %d\n", num1);
    printf("Menor valor = %d", num2);

    return 0;
}