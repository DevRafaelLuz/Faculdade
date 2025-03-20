// Escreva um algoritmo que leia um número e mostre uma mensagem caso este número seja maior ou igual a 50, outra se ele for menor que 50.

package Exercicios01;

import java.util.Scanner;

public class Exercicio08 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numero;

        System.out.print("Digite um número: ");
        numero = scan.nextInt();

        if (numero >= 50) {
            System.out.println("O número " + numero + " é maior ou igual a 50.");
        } else {
            System.out.println("O número " + numero + " é menor que 50.");
        }

        scan.close();
    }
}
