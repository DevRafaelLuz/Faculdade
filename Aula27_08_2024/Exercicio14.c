/* Faça um programa para calcular a área e o perímetro de um hexágono. O programa deve implementar uma função chamada 
    calc_hexa que calcula a área e o perímetro de um hexágono regular de lado L. O programa deve solicitar ao usuário o 
    lado do polígono, calcular e imprimir a área e o perímetro do polígono. O programa termina quando for digitado um valor 
    negativo qualquer para o lado. A função deve obedecer o seguinte protótipo: void calc_hexa(float l, floar *area, float *perimetro); */

#include <stdio.h>
#include <math.h>

#define SQRT3 1.73205080757

void calc_hexa(float l, float *area, float *perimetro) {
    *area = (3 * SQRT3 / 2) * l * l;
    *perimetro = 6 * l;
}

int main() {
    float lado, area, perimetro;

    do {
        printf("Informe o lado do poligono: ");
        scanf("%f", &lado);

        if (lado < 0) {
            break;
        } 

        calc_hexa(lado, &area, &perimetro);
        printf("Area: %.2f\n", area);
        printf("Perimetro: %.2f\n", perimetro);
    } while (lado > -1);

    return 0;
}