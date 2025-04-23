// Faça uma função que leia cinco valores inteiros e imprima o maior e o menor valor;

#include <stdio.h>

void imprimiMaiorMenorNumero(int num[]) {
    int maior = num[0];
    int menor = num[0];

    for (int i = 1; i < 5; i++) {
        if (num[i] > maior) {
            maior = num[i];
        } else if (num[i] < menor) {
            menor = num[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d", menor);
}

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    imprimiMaiorMenorNumero(numeros);

    return 0;
}