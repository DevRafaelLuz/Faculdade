// Escreva um algoritmo que leia dois números digitados pelo usuário e exiba o resultado da sua soma.

package Exercicios01;

import java.util.Scanner;

public class Exercicio02 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o primeiro número: ");
        int firstNumber = scan.nextInt();

        System.out.print("Digite o segundo número: ");
        int secondNumber = scan.nextInt();

        System.out.println("A soma dos números é: " + (firstNumber + secondNumber));

        scan.close();
    }
}
