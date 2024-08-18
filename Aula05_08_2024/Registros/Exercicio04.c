// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura;

#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[255];
} Pessoa;

int main () {
    Pessoa pessoa;

    fflush(stdin);
    printf("Informe o nome da pessoa: ");
    gets(pessoa.nome);
    printf("Informe a idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);
    printf("Informe o endereco: ");
    gets(pessoa.endereco);

    return 0;
}