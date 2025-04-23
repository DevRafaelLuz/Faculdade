// Faça um programa que abra um arquivo de texto e mostre quantas linhas esse arquivo possui.

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("auxiliar.txt", "r");
    char linha[50];
    int linhas = 0;

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo)) {
        linhas++;
    }

    if (fclose(arquivo) == 0) {
        printf("O arquivo possui %d linhas.", linhas);
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}