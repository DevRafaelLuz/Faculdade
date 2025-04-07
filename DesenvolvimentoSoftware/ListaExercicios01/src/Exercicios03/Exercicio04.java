/* Elaborar um programa que efetue a apresentação do valor da conversão
    em real (R$) de um valor lido em dólar (US$). O programa deverá solicitar o
    valor da cotação do dólar e também a quantidade de dólares disponíveis com
    o usuário. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double cotacaoDolar, quantidadeDolares, valorEmReais;

        System.out.print("Digite a cotação do dólar: ");
        cotacaoDolar = scanner.nextDouble();
        System.out.print("Digite a quantidade de dólares: ");
        quantidadeDolares = scanner.nextDouble();

        valorEmReais = cotacaoDolar * quantidadeDolares;
        System.out.printf("O valor em reais é: R$ %.2f%n", valorEmReais);

        scanner.close();
    }
}
