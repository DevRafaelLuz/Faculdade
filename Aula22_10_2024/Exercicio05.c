// Faça um programa que abra um arquivo de texto e mostre na tela quantos caracteres desse arquivo são vogais.

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("auxiliar.txt", "r");
    int contagem = 0, caracter;

    if (arquivo == NULL) {
        return 1;
    }

    while ((caracter = fgetc(arquivo)) != EOF) {
        switch (caracter) {
            case 'A':
            case 'a':
                contagem++;
                break;
            case 'E':
            case 'e':
                contagem++;
                break;
            case 'I':
            case 'i':
                contagem++;
                break;
            case 'O':
            case 'o':
                contagem++;
                break;
            case 'U':
            case 'u':
                contagem++;
                break;
            default:
                break;
            }
    }

    printf("O arquivo possui %d vogais.", contagem);

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}