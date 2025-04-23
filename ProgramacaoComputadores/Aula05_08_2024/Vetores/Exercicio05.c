/* Escreva um programa que possui um vetor para armazenar 10 valores em ponto flutuante. O programa deverá solicitar ao 
    usuário para fornecer os 10 floats e então mostrar na tela as posições do vetor onde estão armazenados valores negativos; */

#include <stdio.h>

int main() {    
    float vetor[10];
    float valor;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero decimal: ");
        scanf("%f", &valor);
        vetor[i] = valor;
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            printf("%d  ", i);
        }
    }

    return 0;
}