#include <stdio.h>

void calcMediaPonderada(float nota1, float nota2, float nota3) {
    float media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("Media ponderada: %.1f", media);
}

int main() {
    float nota1, nota2, nota3;

    do {
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        printf("Digite a nota 3: ");
        scanf("%f", &nota3);
    } while (nota1 < 0.0 || nota2 < 0.0 || nota3 < 0.0);

    calcMediaPonderada(nota1, nota2, nota3);

    return 0;
}