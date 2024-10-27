/* Faça um programa que leia uma quantidade qualquer de números armazenando-os na memoria e pare a leitura quando o 
    usuário entrar um número negativo. Em seguida, imprima o vetor lido. Use a função REALLOC. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int num, count = 0;

    while (1) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &num);

        if (num < 0) break;

        count++;
        int *temp = realloc(vetor, count * sizeof(int));
        if (temp == NULL) {
            printf("Erro na alocação de memória.\n");
            free(vetor);
            return 1;
        }
        vetor = temp;
        vetor[count - 1] = num;
    }

    printf("Números lidos:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}