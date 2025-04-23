/* Faça um programa que receba um título e um texto, ambos inseridos pelo usuário, crie um arquivo que tenha como nome o 
    título e grave nesse arquivo o texto. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char titulo[20], texto[200];

    system("cls");
    fflush(stdin);
    printf("Digite o nome do arquivo a ser criado: ");
    scanf("%s", titulo);
    fflush(stdin);
    printf("Agora digite um texto para ser salvo no arquivo: ");
    scanf("%[^\n]s", texto);

    FILE *arquivo = fopen(strcat(titulo, ".txt"), "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return 1;
    }
    
    fprintf(arquivo, "%s", texto);

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}