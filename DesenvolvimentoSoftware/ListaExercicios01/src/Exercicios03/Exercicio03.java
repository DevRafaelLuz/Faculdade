/* Escrever um programa que leia o nome de um vendedor, o seu salário
    fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que
    este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar
    o seu nome, o salário fixo e salário no final do mês. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nomeVendedor;
        double salarioFixo, totalVendas, comissao, salarioFinal;

        System.out.print("Digite o nome do vendedor: ");
        nomeVendedor = scanner.nextLine();
        System.out.print("Digite o salário fixo do vendedor: ");
        salarioFixo = scanner.nextDouble();
        System.out.print("Digite o total de vendas efetuadas pelo vendedor: ");
        totalVendas = scanner.nextDouble();

        comissao = totalVendas * 0.15;
        salarioFinal = salarioFixo + comissao;

        System.out.println("Nome do vendedor: " + nomeVendedor);
        System.out.println("Salário fixo: R$ " + salarioFixo);
        System.out.println("Salário final: R$ " + salarioFinal);

        scanner.close();
    }
}
