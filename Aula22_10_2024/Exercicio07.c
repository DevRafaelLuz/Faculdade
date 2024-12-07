/* Escreva um programa que leia o conteúdo de um arquivo de texto chamado "frases.txt" e conte quantas palavras há nele. 
    Considere que as palavras são separadas por espaços em branco ou quebras de linha. */

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("frases.txt", "r");
    char frase[100];
    int palavras = 0;

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return 1;
    }

    while (fscanf(arquivo, "%s", frase) != EOF) {
        palavras++;        
    }

    if (fclose(arquivo) == 0) {
        printf("O arquivo possui %d palavras.", palavras);
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}