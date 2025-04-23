/* Escreva um programa que crie um arquivo chamado "registro.txt" para armazenar informações de alunos. O programa deve permitir 
    ao usuário inserir os dados de vários alunos, como nome, matrícula e idade. Os dados de cada aluno devem ser escritos no arquivo 
    em um formato específico. Depois que o usuário inserir os dados, o programa deve listar os alunos do arquivo no console. */

#include <stdio.h>
#include <stdlib.h>

#define N 5

struct Aluno {
    char nome[255];
    int matricula;
    int idade;
};


int main() {
    FILE *arquivo = fopen("registro.txt", "w");
    struct Aluno aluno[N];

    system("cls");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("+--------- < Aluno %d > ---------+\n", i + 1);
        fflush(stdin);
        printf(" Nome: ");
        scanf("%s", aluno[i].nome);
        printf(" Matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf(" Idade: ");
        scanf("%d", &aluno[i].idade);
        fprintf(arquivo, "%s %d %d\n", aluno[i].nome, aluno[i].matricula, aluno[i].idade);
    }

    system("cls");

    for (int j = 0; j < N; j++) {
        printf("+----- < Dados do Aluno %d > -----+\n", j + 1);
        printf(" Nome: %s\n", aluno[j].nome);
        printf(" Matricula: %d\n", aluno[j].matricula);
        printf(" Idade: %d\n", aluno[j].idade);
    }    
    printf("+--------------------------------+\n");

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}