/* Crie um programa que leia o conteúdo de um arquivo de texto chamado "texto.txt" e conte quantas vezes uma determinada 
    palavra (fornecida pelo usuário) aparece no texto. Exiba o número de ocorrências no console. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("texto.txt", "r");
    char palavra[255];
    char palavraLida[255];
    int contagem = 0;

    system("cls");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return 1;
    }

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (fscanf(arquivo, "%s", palavraLida) != EOF) { 
        if (strcmp(palavra, palavraLida) == 0) { 
            contagem++; 
        } 
    }

    system("cls");
    printf("A palavra %s apareceu %d vezes.", palavra, contagem);

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}