/* Faça um programa que crie um arquivo BINÁRIO em disco, com o nome “dados.bin”, e escreva neste arquivo em disco uma contagem 
    que vá de 1 até 100, com um número em cada linha. */

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.bin", "w");

    if (arquivo != NULL) {
        for (int i = 1; i < 101; i++) {
            fprintf(arquivo, "%d\n", i);
        }
    } else {
        printf("Erro ao abrir o arquivo!");
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}