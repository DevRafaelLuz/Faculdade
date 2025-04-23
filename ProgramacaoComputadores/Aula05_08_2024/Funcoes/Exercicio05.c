// Crie uma função que calcula a área de um círculo a partir do valor do raio fornecido como argumento;

#include <stdio.h>

#define PI 3.14

float calcularAreaCirculo(float raio) {
    float area = PI * (raio * raio);
    return area;
}

int main() {
    float raio;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    printf("Area do circulo eh: %.1f", calcularAreaCirculo(raio));

    return 0;
}