/* Escreva um programa que utiliza 3 vetores (A, B e C) para armazenar 5 inteiros cada. O programa deverá solicitar ao usuário 
    para fornecer os valores inteiros para preencher os vetores A e B. O vetor C deverá ser calculado utilizando a regra abaixo;
        1. Nas posições pares C[i] = A[i] + B[i];
        2. Nas posições ímpares C[i] = A[i] ∗ B[i];
        3. Depois de calcular o vetor C o programa deverá mostrar na tela os 3 vetores; */

#include <stdio.h>

int main() {
    int i, A[5], B[5], C[5];

    printf("PREENCHA O VETOR A: \n");
    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }
    printf("PREENCHA O VETOR B: \n");
    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &B[i]);
    }

    for (i = 0; i <= 5; i++) {
        if ((i + 1) % 2 == 0) {
            C[i] = A[i] + B[i];
        } else {
            C[i] = A[i] * B[i];
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d  ", A[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%d  ", B[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%d  ", C[i]);
    }

    return 0;
}