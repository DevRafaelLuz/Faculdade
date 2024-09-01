/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro 
    dos dois números lidos. A função dever  a armazenar o dobro de A na própria variável A e o dobro de B na própria variável B. */

#include <stdio.h>

void calcularSoma(int *a, int *b) {
    *a += *a;
    *b += *b;

    printf("Soma do valor A: %d\n", *a);
    printf("Soma do valor B: %d", *b);
}

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    calcularSoma(&a, &b);

    return 0;
}