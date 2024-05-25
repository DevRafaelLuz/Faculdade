#include <stdio.h>

void verificaNumero(int num) {
    int cont = 1, soma = 0;

    while (cont < num) {
        int valor = num % cont;

        if (valor == 0) {
            soma += cont;
        }

        cont++;
    }

    if (soma == num) {
        printf("%d eh perfeito", num);
    }
}

int main() {
    int num;

    printf("Digite um numero para verificar se o mesmo eh perfeito: ");
    scanf("%d", &num);

    verfificarNumero(num);

    return 0;
}