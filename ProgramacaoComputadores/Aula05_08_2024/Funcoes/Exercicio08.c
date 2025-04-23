// Crie uma função para calcular Bhaskara;

#include <stdio.h>
#include <math.h>

void calcularBaskara(float a, float b, float c) {
    float delta, x1, x2;
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
}

int main() {
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    calcularBaskara(a, b, c);

    return 0;
}