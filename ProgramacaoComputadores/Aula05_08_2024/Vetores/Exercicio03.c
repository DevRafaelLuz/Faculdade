/* Escreva um programa que possui um vetor para armazenar 5 inteiros. O programa deverá solicitar ao usuário para 
    fornecer os 5 inteiros, armazená-los no vetor e, então apresentar na tela o conteúdo do vetor em ordem inversa (de trás para frente);*/

#include <stdio.h>

int main() {
    int vetor[5];
    int valor, i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);
        vetor[i] = valor;
    }

    for (i = 4; i >= 0; i--) {
        printf("%d  ", vetor[i]);
    }

    return 0;
} 