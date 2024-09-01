/* Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários. Além disto, concedeu um abono de R$ 100,00 
    para aqueles que recebem até R$ 750,00. Dado o valor do salário de um funcionário, informar para quanto ele será reajustado. */

#include <stdio.h>

int main() {
    float salario, *s, aumento;

    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);

    s = &salario;

    if (*s > 750) {
        aumento = *s * (5.0 / 100);
        *s += aumento + 100.0;
    } else {
        aumento = *s * (5.0 / 100);
        *s += aumento;
    }

    printf("Salario reajustado para: R$%.2f", *s);

    return 0;
}