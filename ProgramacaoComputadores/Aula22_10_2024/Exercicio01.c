// Faça um programa que receba o título de um arquivo, abra esse arquivo e utilize a função fscanf para imprimir o conteúdo do mesmo.

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("auxiliar.txt", "r");
    char texto[50];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    } 

    printf("Texto: ");
    while (fscanf(arquivo, "%s", texto) != EOF) {
        printf("%s ", texto);
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}