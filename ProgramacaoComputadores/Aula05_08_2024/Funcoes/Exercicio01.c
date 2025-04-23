// Crie um programa que calcula a hipotenusa, dado os valores de seus catetos;

#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float cateto1, float cateto2) {
    float hipotenusa;
    return hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); 
}

int main() {
    float cateto1, cateto2;

    printf("Informe o valor do cateto 1: ");
    scanf("%f", &cateto1);
    printf("Informe o valor do cateto 2: ");
    scanf("%f", &cateto2);

    printf("A hipotenusa eh: %.1f", calcularHipotenusa(cateto1, cateto2));

    return 0;
}