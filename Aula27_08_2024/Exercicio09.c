/* Escreva uma função CALCULA que:
    1. Receba como parâmetros duas variáveis inteiras, X e Y;
    2. Retorne em X a soma de X e Y;
    3. Retorne em Y a subtração de X e Y; */

#include <stdio.h>

void calcula(int *x, int *y) {
    int auxiliar = *x;
    *x += *y;
    *y = auxiliar - *y;
}

int main() {
    int x = 10, y = 5;

    calcula(&x, &y);

    printf("Valor de X: %d\n", x);
    printf("Valor de Y: %d", y);

    return 0;
}