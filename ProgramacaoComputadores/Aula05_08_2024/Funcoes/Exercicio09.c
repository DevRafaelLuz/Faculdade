// Crie uma função em linguagem C que receba 3 números e retorne o maior valor;

#include <stdio.h>

int maiorValor(int valor1, int valor2, int valor3) {
    if (valor1 > valor2 && valor1 > valor3) {
        return valor1;
    } else if (valor2 > valor1 && valor2 > valor3) {
        return valor2;
    } else {
        return valor3;
    }
}

int main() {
    int numero1, numero2, numero3;

    printf("Informe o numero 1: ");
    scanf("%d", &numero1);
    printf("Informe o numero 2: ");
    scanf("%d", &numero2);
    printf("Informe o numero 3: ");
    scanf("%d", &numero3);

    printf("Maior numero eh: %d", maiorValor(numero1, numero2, numero3));

    return 0;
}