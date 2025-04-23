#include <stdio.h>

void verificarNumero(int num) {
    if (num % 2 == 0 || num % 3 == 0) {
        printf("%d eh divisivel por 2 ou 3", num);
    } else {
        printf("Valor invalido");
    }
}

int main() {
    int num;

    printf("Digite um numero a ser verificado: ");
    scanf("%d", &num);

    verificarNumero(num);

    return 0;
}