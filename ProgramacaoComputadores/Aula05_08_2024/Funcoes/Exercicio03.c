//Crie uma função que retorna o maior valor entre dois inteiros;

#include <stdio.h>

int maiorValor(int valor1, int valor2) {
    if (valor1 > valor2) {
        return valor1;
    } else {
        return valor2;
    }
}

int main() {
    int numero1, numero2;

    printf("Informe um numero: ");
    scanf("%d", &numero1);
    printf("Informe outro numero: ");
    scanf("%d", &numero2);

    printf("Maior numero eh: %d", maiorValor(numero1, numero2));

    return 0;
}