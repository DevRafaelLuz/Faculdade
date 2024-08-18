// Crie uma função que converta um valor de temperatura em graus Farenheit para Celsius;

#include <stdio.h>

float convercaoTemperatura(float celsius) {
    return (celsius * 1.8) + 32;
}

int main() {
    float celsius;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    printf("Temperatura em Farenheit: %.0f%cF", convercaoTemperatura(celsius), 248);

    return 0;
}