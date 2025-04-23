/* Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, 
    ou seja, esta função e chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conter o valor 
    de B e B terá o valor de A. */

#include <stdio.h>

void trocarValores(int *num1, int *num2) {
    int auxiliar = *num1;

    printf("Antes da troca: \nValor1 = %d | Valor2 = %d\n", *num1, *num2);

    *num1 = *num2;
    *num2 = auxiliar;

    printf("Depois da troca: \nValor1 = %d | Valor2 = %d\n", *num1, *num2);
}

int main() {
    int valor1, valor2;

    printf("Digite um numero: ");
    scanf("%d", &valor1);
    printf("Digite outro numero: ");
    scanf("%d", &valor2);

    trocarValores(&valor1, &valor2);

    return 0;
}