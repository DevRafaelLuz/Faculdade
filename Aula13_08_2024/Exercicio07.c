// Dado n e uma sequência com n números inteiros, imprimir a sequência na ordem inversa a que foi lida, sem usar um vetor.

#include <stdio.h>

void imprimirInverso(int n) {
    if (n == 0) {
        return;
    }
    int num;
    scanf("%d", &num);
    imprimirInverso(n - 1);
    printf("%d ", num);
}

int main() {
    int n;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    printf("Digite a sequencia de %d numeros:\n", n);
    imprimirInverso(n);

    return 0;
}