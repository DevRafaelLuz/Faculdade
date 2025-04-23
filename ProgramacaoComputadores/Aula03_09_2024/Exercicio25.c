/* Escreva uma função que recebe uma string (ponteiro para caracteres) como parâmetro e retorna uma nova string contendo 
    a versão comprimida da string original. Por exemplo, a string "aaabbbcc" seria comprimida para "a3b3c2". */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* compressString(const char* str) {
    int len = strlen(str);
    char* compressed = (char*)malloc((len * 2 + 1) * sizeof(char)); 
    if (!compressed) return NULL;

    int count = 1;
    int j = 0;

    for (int i = 1; i <= len; i++) {
        if (*(str + i) == str[i - 1]) {
            count++;
        } else {
            compressed[j++] = str[i - 1];
            j += sprintf(&compressed[j], "%d", count);
            count = 1;
        }
    }
    compressed[j] = '\0';

    return compressed;
}

int main() {
    const char* str = "aaabbbcc";
    char* compressedStr = compressString(str);
    if (compressedStr) {
        printf("String comprimida: %s\n", compressedStr);
        free(compressedStr);
    } else {
        printf("Erro na alocação de memória.\n");
    }
    return 0;
}