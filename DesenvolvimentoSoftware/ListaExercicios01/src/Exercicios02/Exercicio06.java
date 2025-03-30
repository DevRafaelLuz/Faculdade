/* Elabore um programa que leia um vetor com 5 notas de um aluno e um outro
    vetor com 5 pesos e calcule a média ponderada do aluno. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio06 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double[] notas = new double[2];
        double[] pesos = new double[2];
        double somaNotas = 0;
        double somaPesos = 0;
        double mediaPonderada;

        for (int i = 0; i < notas.length; i++) {
            System.out.print("Digite a nota " + (i + 1) + ": ");
            notas[i] = scanner.nextDouble();
        }

        for (int i = 0; i < pesos.length; i++) {
            System.out.print("Digite o peso " + (i + 1) + ": ");
            pesos[i] = scanner.nextDouble();
        }

        for (int i = 0; i < notas.length; i++) {
            somaNotas += notas[i] * pesos[i];
            somaPesos += pesos[i];
        }

        mediaPonderada = somaNotas / somaPesos;
        System.out.printf("A média ponderada é: %.2f%n", mediaPonderada);
        scanner.close();
    }
}
