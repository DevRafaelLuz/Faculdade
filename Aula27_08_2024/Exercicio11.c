/* Numa empresa paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% dos salários acima de R$ 1500,00. 
    Dado o número de horas trabalhadas por um funcionário, informar o valor do seu salário líquido. */

#include <stdio.h>

int main() {
    int horasTrabalhadas, *hr;
    float imposto, salarioBruto, salarioLiquido;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    hr = &horasTrabalhadas;
    salarioBruto = *hr * 19.5;

    if (salarioBruto > 1500.0) {
        imposto = salarioBruto * (10.0 / 100); 
        salarioLiquido = salarioBruto - imposto;

        printf("Salario liquido: R$%.2f", salarioLiquido);
    } else {
        printf("Salario liquido: R$%.2f", salarioBruto);
    }

    return 0;
}