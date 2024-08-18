/* Faça uma função que receba dois números inteiros e retorne a soma dos números inteiros existentes entre eles. 
    Por exemplo: Para os valores de entrada 2 e 8, a soma será 3+4+5+6+7=25; */

#include <stdio.h>

int soma(int valor1, int valor2) {
    int soma = 0;
    
    if (valor1 < valor2) {
        valor1++;
        while (valor1 < valor2) {
            soma += valor1;
            valor1++;
        }
    } else {
        valor2++;
        while (valor2 < valor1) {
            soma += valor2;
            valor2++;
        }
    }    

    return soma;
}

int main() {
    int num1, num2;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    if (num1 != num2) {
        printf("Resultado: %d", soma(num1, num2));
    } else {
        printf("Os numero nao podem ser iguais");
    }    

    return 0;
}