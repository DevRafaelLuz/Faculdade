/* Faça um programa que receba o preço de custo de um produto e mostre o
    valor de venda. Sabe-se que o preço de custo receberá um acréscimo de
    acordo com um percentual informado pelo usuário. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio06 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double precoCusto, percentualAumento, valorVenda;

        System.out.print("Digite o preço de custo do produto: ");
        precoCusto = scanner.nextDouble();
        System.out.print("Digite o percentual de aumento: ");
        percentualAumento = scanner.nextDouble();

        valorVenda = precoCusto + (precoCusto * percentualAumento / 100);
        System.out.printf("O valor de venda do produto é: R$ %.2f%n", valorVenda);

        scanner.close();
    }
}
