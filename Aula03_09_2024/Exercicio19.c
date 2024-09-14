/* Escreva uma função que recebe uma string e um valor de deslocamento inteiro como parâmetros. A função deve aplicar 
    a Cifra de César para criptografar a string, deslocando cada caractere do alfabeto pelo valor especificado. */

#include <stdio.h>
#include <ctype.h>

void cifra_de_cesar(char *texto, int deslocamento) {
    for (int i = 0; *(texto + i) != '\0'; i++) {
        char c = texto[i];
        
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            texto[i] = (c - base + deslocamento) % 26 + base;
        }
    }
}

int main() {
    char texto[] = "Ola, Mundo!";
    int deslocamento = 3;
    
    cifra_de_cesar(texto, deslocamento);
    printf("Texto criptografado: %s\n", texto);
    
    return 0;
}