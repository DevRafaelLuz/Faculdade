#include <stdio.h>

double receberNumero() {
    double num = 0;

    while (num <= 0) {
        printf("Digite um numero: ");    
        scanf("%lf", &num);
    }    

    return num;
}

void calcularQuadrado(double valor) {
    double calc = valor * valor;
    printf("Resultado: %.2lf", calc);
}

int main() {    
    calcularQuadrado(receberNumero());

    return 0;
}