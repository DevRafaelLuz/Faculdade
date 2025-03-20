/* Escreva um algoritmo que leia um número digitado pelo usuário e mostre a
    mensagem “Número maior do que 10!”, caso este número seja maior, ou
    “Número menor ou igual a 10!”, caso este número seja menor ou igual. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite um número: ");
        int number = scan.nextInt();

        if (number > 10) {
            System.out.println("Número maior do que 10!");
        } else {
            System.out.println("Número menor ou igual a 10!");
        }
        scan.close();
    }
}
