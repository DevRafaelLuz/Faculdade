/* Crie uma função que copia um vetor de caracteres para outro vetor (cria uma cópia). 
    O protótipo da função deve ser: char *strcopy(char *str, int tamanho); */

#include <stdio.h>
#include <string.h>

char *strcopy(char *str, int tamanho) {
    static char vetor[100];
    
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = str[i];
    }

    vetor[tamanho] = '\0';

    return vetor;
}

int main() {
    char vetor[] = "Ola, mundo";
    int tamanho = strlen(vetor);

    char *copia = strcopy(vetor, tamanho);

    printf("Original: %s\n", vetor);
    printf("Copia: %s", copia);

    return 0;
}