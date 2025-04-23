// Escreva um programa em C para inverter uma string usando recursão.

#include <stdio.h>
#include <string.h>

char inverteString(char palavra[], int primeiraLetra, int ultimaLetra) {
    if (primeiraLetra >= ultimaLetra) {
        return palavra[primeiraLetra];
    } else {
        char temp = palavra[primeiraLetra];
        palavra[primeiraLetra] = palavra[ultimaLetra];
        palavra[ultimaLetra] = temp;
        return inverteString(palavra, primeiraLetra + 1, ultimaLetra - 1);
    }
}

int main() {
    char palavra[50];
    int letras = 0;

    printf("Digite uma palavra qualquer para inverter: ");
    scanf("%s", palavra);
    letras = strlen(palavra);

    inverteString(palavra, 0, letras - 1);
    printf("Palavra invertida: %s", palavra);

    return 0;
}