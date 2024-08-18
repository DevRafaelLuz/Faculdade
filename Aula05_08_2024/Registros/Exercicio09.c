/* Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de uma empresa, 
    compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa 
    (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela; */

#include <stdio.h>

typedef struct {
    char nome[100], sexo[1];
    int idade, cpf, codigoSetor;
    char dataNascimento[10];
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    Funcionario f;

    printf("=== CADASTRO DO FUNCIONARIO ===\n");
    fflush(stdin);
    printf("Informe o nome: ");
    gets(f.nome);
    printf("Informe a idade: ");
    scanf("%d", &f.idade);
    fflush(stdin);
    printf("Informe o sexo (M/F): ");
    gets(f.sexo);
    printf("Informe o CPF: ");
    scanf("%d", &f.cpf);
    fflush(stdin);
    printf("Informe a data de nascimento: ");
    gets(f.dataNascimento);
    printf("Informe o codigo do setor inde trabalha (0-99): ");
    scanf("%d", &f.codigoSetor);
    fflush(stdin);
    printf("Informe o cargo: ");
    gets(f.cargo);
    printf("Informe o salario: ");
    scanf("%f", &f.salario);

    printf("\n=== DADOS DO FUNCIONARIO ===\n");
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Sexo: %s\n", f.sexo);
    printf("CPF: %d\n", f.cpf);
    printf("Data de Nascimento: %s\n", f.dataNascimento);
    printf("Codigo do setor: %d\n", f.codigoSetor);
    printf("Cargo: %s\n", f.cargo);
    printf("Salario: %.2f", f.salario);

    return 0;
}