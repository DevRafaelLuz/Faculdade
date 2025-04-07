/* Escrever um programa que leia o nome e o sexo de 56 pessoas e
    informe o nome e se ela é homem ou mulher. No final informe total de homens
    e de mulheres. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] nomes = new String[56];
        String[] sexos = new String[56];
        int totalHomens = 0;
        int totalMulheres = 0;

        for (int i = 0; i < 56; i++) {
            System.out.print("Digite o nome da pessoa " + (i + 1) + ": ");
            nomes[i] = scanner.nextLine();
            System.out.print("Digite o sexo da pessoa " + (i + 1) + " (M/F): ");
            sexos[i] = scanner.nextLine().toUpperCase();

            if (sexos[i].equals("M")) {
                totalHomens++;
            } else if (sexos[i].equals("F")) {
                totalMulheres++;
            }
        }

        System.out.println("Total de homens: " + totalHomens);
        System.out.println("Total de mulheres: " + totalMulheres);
        scanner.close();
    }
}
