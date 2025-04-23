#include <stdio.h>

void exibirValor(int *valor) {
    if (*valor >= 0) {
        printf("%d", *valor);
    } else {
        *valor = *valor * -1;
        printf("%d", *valor);
    }
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    exibirValor(&num);

    return 0;
}