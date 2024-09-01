/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
    Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
    Imprima os valores das variáveis antes e após a modificação. */

#include <Stdio.h>

int main() {
    int numero = 0, *n;
    float decimal = 7.0, *d;
    char caracter = 'O', *c;

    printf("Valor do inteiro antes da modificação: %d\n", numero);
    printf("Valor do real antes da modificação: %f\n", decimal);
    printf("Valor do char antes da modificação: %c\n", caracter);

    n = &numero;
    d = &decimal;
    c = &caracter;

    numero = *n + 15;
    decimal = *d * 5.7;
    caracter = *c;

    printf("Valor do inteiro depois da modificação: %d\n", numero);
    printf("Valor do real depois da modificação: %f\n", decimal);
    printf("Valor do char depois da modificação: %c\n", caracter);

    return 0;
}