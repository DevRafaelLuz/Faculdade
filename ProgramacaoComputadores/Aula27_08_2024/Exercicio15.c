/* Faça um programa em C que calcule os juros de um determinado saldo com base em uma taxa, ambos informados pelo usuário. 
    O programa deve utilizar uma função para calcular os juros e atualizar o saldo atual com base no saldo antigo acrescido dos juros.
    Ao final, a aplicação deve imprimir o total de juros e o novo saldo. */

#include <stdio.h>

void calcularJuros(float saldo, float taxa, float *juros, float *novoSaldo) {
    *juros = saldo * (taxa / 100);
    *novoSaldo = saldo + *juros;
}

int main() {
    float saldo, taxa, juros, novoSaldo;

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo);

    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);

    calcularJuros(saldo, taxa, &juros, &novoSaldo);

    printf("Total de juros: %.2f\n", juros);
    printf("Novo saldo: %.2f\n", novoSaldo);

    return 0;
}
