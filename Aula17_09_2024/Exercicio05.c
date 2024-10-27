/* Peça ao usuário para inserir uma string e, em seguida, aloque dinamicamente memória para armazenar uma cópia dessa string. 
    Imprima a cópia da string na tela. */

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    char *string;

    printf("Digite uma string: ");
    gets(string);

    int tamanho = strlen(string);

    char *copia = (char*) malloc(tamanho * sizeof(char));

    copia = string;

    printf("%s", copia);

    free(copia);

    return 0;
}