/* Faça um programa em C que receba 4 notas de um aluno, calcule sua média, e exiba uma mensagem de aprovação 
    (caso a média seja maior ou igual a 7) ou reprovação (caso contrário). Manipule as variáveis do programa 
    (para leitura, processamento e exibição) APENAS através de ponteiros, nunca utilizando as variáveis originais. */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, *n1, *n2, *n3, *n4;

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);
    printf("Informe a nota 3: ");
    scanf("%f", &nota3);
    printf("Informe a nota 4: ");
    scanf("%f", &nota4);

    n1 = &nota1;
    n2 = &nota2;
    n3 = &nota3;
    n4 = &nota4;

    *n1 = (*n1 + *n2 + *n3 + *n4) / 4; 

    if (*n1 > 6) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}