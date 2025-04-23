// Faça uma função que informe a quantidade de dígitos de um determinado número inteiro informado;

#include <stdio.h>

int exibiQuantidadeDigitos(int num) {
    int contagem = 0;
    while (num != 0) {
        num /= 10;  // Remove o último dígito
        contagem++;    // Incrementa a contagem de dígitos
    }

    return contagem;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero %d tem %d digitos.", num, exibiQuantidadeDigitos(num));

    return 0;
}