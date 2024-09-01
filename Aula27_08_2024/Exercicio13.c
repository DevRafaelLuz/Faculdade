/* Receba do usuário dois números inteiros e um caractere, podendo este ser: “+”, “-“, “*”, “/” e “%”, verifique 
    o símbolo da operação, realize a operação de acordo com o operador e imprima o resultado. Caso o operador seja inválido, 
    mostrar a informação referente. */

#include <stdio.h>

int main() {
    int num1, num2, *n1, *n2;
    char operacao;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    fflush(stdin);
    printf("Escolha uma operacao: ");
    scanf("%c", &operacao);

    n1 = &num1;
    n2 = &num2;

    switch (operacao) {
        case '+':
            printf("%d", *n1 + *n2);
            break;
        case '-':
            printf("%d", *n1 - *n2);
            break;
        case '*':
            printf("%d", *n1 * *n2);
            break;
        case '/':
            printf("%d", *n1 / *n2);
            break;
        case '%':
            printf("%d", *n1 % *n2);
            break;
        default:
            printf("Operacao invalida!");
    }

    return 0;
}