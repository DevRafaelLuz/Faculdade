/* Escreva uma função que recebe dois ponteiros para inteiros como parâmetros. A função deve trocar os 
    valores apontados pelos ponteiros usando aritmética de ponteiros. */

#include <stdio.h>

void trocar(int *a, int *b) {
    int aux = *a;
    *a = *b;    
    *b = aux;
}

int main() {
    int x = 5, y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    trocar(&x, &y);
    
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    
    return 0;
}
