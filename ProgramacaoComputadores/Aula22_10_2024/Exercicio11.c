// Para um arquivo que contenha qualquer texto, fazer a transformação de seus caracteres em lowerCase para caracteres em upperCase;

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *arquivo = fopen("texto.txt", "r");
    FILE *novoArquivo = fopen("novoTexto.txt", "w");
    int character;

    if (arquivo == NULL || novoArquivo == NULL) {
        perror("Erro ao abrir o arquivo!");
        return 1;
    }

    while ((character = fgetc(arquivo)) != EOF) { 
        fputc(toupper(character), novoArquivo); 
    }

    system("cls");
    if (fclose(arquivo) == 0 && fclose(novoArquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}