/* Escreva uma função que dado um numero real passado como parâmetro, retorne a parte inteira e a parte fracionaria deste numero.
    Escreva um programa que chama esta função. Protótipo: void frac( float num , int* inteiro , float* frac ) */

#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float real, parteFracionaria;
    int parteInteira;

    printf("Digite um numero real: ");
    scanf("%f", &real);

    frac(real, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.6f\n", parteFracionaria);

    return 0;
}