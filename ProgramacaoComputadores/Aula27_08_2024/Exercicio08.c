/* Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função devera 
    calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não devera possuir retorno, 
    mas devera modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal. */

#include <stdio.h>

void calcularSoma(int *a, int *b) {
    *a += *b;
}

int main() {
    int a = 10, b = 20;

    printf("Valor de A: %d\n", a);
    calcularSoma(&a, &b);
    printf("Valor de B: %d\n", b);
    printf("Resultado da soma: %d", a);

    return 0;
}