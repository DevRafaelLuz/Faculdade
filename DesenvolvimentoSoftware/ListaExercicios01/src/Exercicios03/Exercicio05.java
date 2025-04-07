/* A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco)
    prestações sem juros. Faça um programa que receba um valor de uma
    compra e mostre o valor das prestações. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio05 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double valorCompra, valorPrestacao;
        int numeroPrestacoes = 5;

        System.out.print("Digite o valor da compra: ");
        valorCompra = scanner.nextDouble();

        valorPrestacao = valorCompra / numeroPrestacoes;
        System.out.printf("O valor de cada prestação é: R$ %.2f%n", valorPrestacao);

        scanner.close();
    }
}
