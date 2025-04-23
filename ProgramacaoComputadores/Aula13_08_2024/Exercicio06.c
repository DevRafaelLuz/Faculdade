// Escrever uma função recursiva que calcule o valor de a elevado a b.

#include <stdio.h>

int potencia(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * potencia(a, b - 1);
    }
}

int main() {
    int a = 2, b = 3;

    printf("%d elevado a %d eh: %d\n", a, b, potencia(a, b));
    return 0;
}