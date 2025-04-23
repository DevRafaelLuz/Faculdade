/* Crie uma estrutura chamada "Aluno" que represente os seguintes dados de um aluno: nome (string), idade (int) e nota (float). 
    Em seguida, declare e inicialize uma variável dessa estrutura e preencha os dados de um aluno. Por fim, imprima os dados do aluno
    cadastrado; */

#include <stdio.h>

struct Aluno {
    char nome[100];
    int idade;
    float nota;
};

int main() {
    struct Aluno aluno;
    fflush(stdin);
    printf("Nome do aluno: ");
    scanf("%[^\n]s", aluno.nome);
    fflush(stdin);
    printf("Idade do aluno: ");
    scanf("%d", &aluno.idade);
    printf("Nota: ");
    scanf("%f", &aluno.nota);

    printf("--- DADOS DO ALUNO ---\n");
    printf("%s\n", aluno.nome);
    printf("%d\n", aluno.idade);
    printf("%.1f\n", aluno.nota);

    return 0;
}