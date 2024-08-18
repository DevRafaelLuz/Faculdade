/* Faça um programa que simule um lançamento de dados. Lance o dado 100 vezes e armazene os resultados em um vetor.
    Depois, mostre quantas vezes cada valor foi conseguido; */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i, vetor[100], contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0, contador5 = 0, contador6 = 0;

    for (i = 0; i < 100; i++) {
        vetor[i] = (rand() % 6) + 1;
    }

    for (i = 0; i < 100; i++) {
        switch(vetor[i]) {
            case 1:
                contador1++;
                break;
            case 2:
                contador2++;
                break;
            case 3:
                contador3++;
                break;
            case 4:
                contador4++;
                break;
            case 5:
                contador5++;
                break;
            default:
                contador6++;
                break;
        }
    }

    printf("Numero 1 obtido: %d vezes\n", contador1);
    printf("Numero 2 obtido: %d vezes\n", contador2);
    printf("Numero 3 obtido: %d vezes\n", contador3);
    printf("Numero 4 obtido: %d vezes\n", contador4);
    printf("Numero 5 obtido: %d vezes\n", contador5);
    printf("Numero 6 obtido: %d vezes", contador6);

    return 0;
}