// Crie um programa em Linguagem C que conte os dígitos de um determinado número usando recursão.

#include <stdio.h>

int contarDigitos(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + contarDigitos(num / 10);
    }
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero %d possui %d digitos", num, contarDigitos(num));

    return 0;
}