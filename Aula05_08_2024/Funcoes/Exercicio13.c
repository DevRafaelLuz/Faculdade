/* Faça um programa com uma função chamada somaImposto. A função possui dois parâmetros formais: taxaImposto, 
    que é a quantia de imposto sobre vendas expressa em porcentagem e custo, que é o custo de um item antes do imposto. 
    A função “altera” o valor de custo para incluir o imposto sobre vendas; */

#include <stdio.h>

void somaImposto(float taxaImposto, float custo) {
    float valorTotal = custo + (custo * (taxaImposto / 100));
    printf("Valor total com imposto incluido: %.2f", valorTotal);
}

int main() {
    float taxa, custo;

    printf("Informe o custo: ");
    scanf("%f", &custo);
    printf("Informe a taxa de imposto: ");
    scanf("%f", &taxa);

    somaImposto(taxa, custo);

    return 0;
}