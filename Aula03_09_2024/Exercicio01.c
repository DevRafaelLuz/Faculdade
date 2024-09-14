/* Crie 3 variáveis e associe um valor a cada uma delas. Crie 1 ponteiro e mostre o conteúdo das 3 variáveis 
    através deste único ponteiro; */

#include <stdio.h>

int main() {
    int valor1 = 10, valor2 = 20, valor3 = 30;  
    int *ponteiro;

    ponteiro = &valor1;
    printf("%d\n", *ponteiro);
    ponteiro = &valor2;
    printf("%d\n", *ponteiro);
    ponteiro = &valor3;
    printf("%d", *ponteiro);

    return 0;
}