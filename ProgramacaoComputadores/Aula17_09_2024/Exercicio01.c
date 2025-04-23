/* Crie um programa que:
    1. Aloque dinamicamente um ponteiro de 5 números inteiros;
    2. Peça para o usuário digitar os 5 números no espaço alocado;
    3. Mostre na tela os 5 números;
    4. Libere a memoria alocada; */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro = (int*) malloc(5 * sizeof(int));

    if (ponteiro != NULL) {
        for (int i = 0; i < 5; i++) {
            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &ponteiro[i]);
        }

        for (int j = 0; j < 5; j++) {
            printf("Valor %d: %d\n", j + 1, ponteiro[j]);
        }
    } else {
        printf("Erro na alocacao de memoria");
    }

    free(ponteiro);

    return 0;
}