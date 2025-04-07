/* Faça um programa que receba a idade de um número finito de pessoas e
    mostre mensagem informando “maior de idade” e “menor de idade” para cada
    pessoa. Considerar a pessoa com 18 anos como maior de idade. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio09 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int idade;
        char continuar = 's';

        do {
            System.out.print("Digite a idade da pessoa: ");
            idade = scanner.nextInt();

            if (idade >= 18) {
                System.out.println("Maior de idade");
            } else {
                System.out.println("Menor de idade");
            }

            System.out.print("Deseja continuar? (s/n): ");
            continuar = scanner.next().charAt(0);
        } while (continuar == 's' || continuar == 'S');

        scanner.close();
    }
}
