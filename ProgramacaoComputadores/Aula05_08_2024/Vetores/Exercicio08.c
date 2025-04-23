/* Escreva um programa que utiliza dois vetores (A e B) para armazenar 5 inteiros cada. O programa deverá solicitar 
    ao usuário para fornecer os valores inteiros para preencher os vetores A e B, e depois mostrar na tela os valores 
    comuns aos dois vetores, isto é, valores que aparecem nos dois vetores A e B; */

#include <stdio.h>

int main() {
    int A[5], B[5], i, valor;

    printf("--- PREENCHA O VETOR A ---\n");
    for (i = 0; i < 5; i++) {
        printf("Informe o numero: ");
        scanf("%d", &valor);
        A[i] = valor;
    }

    printf("--- PREENCHA O VETOR B --- ");
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Informe o numero: ");
        scanf("%d", &valor);
        B[i] = valor;
    }

    printf("--- VALORES COMUNS EM AMBOS OS VETORES ---\n");
    for (i = 0; i < 10; i++) {
        if (A[i] == B[i]) {
            printf("%d  ", A[i]);
        }
    }

    return 0;
}    