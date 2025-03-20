// Escreva um algoritmo que leia dois números e ao final mostre a soma, subtração, multiplicação e a divisão dos números lidos.

package Exercicios01;

import java.util.Scanner;

public class Exercicio04 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Digite o primeiro número: ");
        int num1 = scan.nextInt();

        System.out.println("Digite o segundo número: ");
        int num2 = scan.nextInt();

        System.out.println("Soma: " + (num1 + num2));
        System.out.println("Subtração: " + (num1 - num2));
        System.out.println("Multiplicação: " + (num1 * num2));
        System.out.println("Divisão: " + (num1 / num2));

        scan.close();
    }
}
