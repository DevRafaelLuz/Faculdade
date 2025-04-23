// Implemente duas versões da função strlen, uma em que utiliza índices e outra em que aplique aritmética de ponteiros.

#include <stdio.h>
#include <string.h>

void imprimirFraseComIndices(char frase[], int tamanho) {
    printf("Frase com indices: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%c", frase[i]);
    }
}

void imprimirFraseComAritmeticaDePonteiro(char *frase, int tamanho) {
    printf("Frase com aritmetica de ponteiros: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%c", *frase++);
    }
}

int main() {
    char frase[] = "Ola, mundo";
    int tamanho = strlen(frase);

    imprimirFraseComIndices(frase, tamanho);
    printf("\n");
    imprimirFraseComAritmeticaDePonteiro(frase, tamanho);

    return 0;
}