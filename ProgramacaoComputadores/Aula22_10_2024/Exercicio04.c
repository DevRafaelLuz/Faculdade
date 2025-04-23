/* Faça um programa que crie/abra um arquivo de texto denominado “arq.txt” e permita que o usuário grave diversos caracteres nesse 
    arquivo até que o mesmo entre com o caractere “0”. Por fim, o arquivo deve ser fechado. */

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arq.txt", "a");
    char caracter;

    if (arquivo == NULL) {
        return 1;
    }

    while (caracter != '0') {
        fflush(stdin);
        printf("Digite um caracter: ");
        scanf("%c", &caracter);

        fputc(caracter, arquivo);
    }

    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso!");
    } else {
        printf("\nErro ao fechar o arquivo!");
    }

    return 0;
}