/* Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de 
    notas (números reais). Depois de ler as notas, imprime a média aritmética. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int alunos;
    float soma = 0.0, media;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &alunos);

    float *notas = (float*) malloc(alunos * sizeof(float));

    for (int i = 0; i < alunos; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / alunos;

    printf("Media das notas = %f", media);

    free(notas);

    return 0;
}