/* Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, 
    armazene em vetor dessa estrutura e imprima os dados na tela;*/

#include <stdio.h>

typedef struct {
    char nome[100];
    int matricula;
    char curso[255];
} Alunos;

int main() {
    int tamanho = 5, i;
    Alunos aluno[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("=== ALUNO %d ===\n", i + 1);
        fflush(stdin);
        printf("Informe o nome do aluno: ");
        scanf("%[^\n]s", aluno[i].nome);
        printf("Informe o numero da matricula: ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        printf("Informe o nome do curso: ");
        scanf("%[^\n]s", aluno[i].curso);
    }

    for (i = 0; i < tamanho; i++) {
        printf("=== DADOS DO ALUNO %d\n", i + 1);
        printf("%s\n", aluno[i].nome);
        printf("%d\n", aluno[i].matricula);
        printf("%s\n", aluno[i].curso);
    }
}