// Escreva uma função que imprime na tela a tabuada de um determinado número fornecido como argumento;

#include <stdio.h>

void imprimiTabuada(int num) {
    for (int i = 0; i < 10; i++) {
        printf("%d X %d = %d\n", num, i + 1, num * (i + 1));
    }
}

int main() {
    int num;

    printf("Informe qual tabuada deseja imprimir: ");
    scanf("%d", &num);

    imprimiTabuada(num);

    return 0;
}