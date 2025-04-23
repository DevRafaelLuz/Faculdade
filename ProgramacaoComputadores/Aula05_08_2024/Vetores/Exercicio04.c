/* Escreva um programa que possui um vetor para armazenar 10 inteiros. O programa deverá solicitar ao usuário para 
    fornecer os 10 inteiros e então apresentar na tela apenas os valores ímpares que aparecem no vetor; */

#include <stdio.h>

int main() {
    int vetor[10];
    int valor, i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);
        vetor[i] = valor;        
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d  ", vetor[i]);
        }
    }

    return 0;
}