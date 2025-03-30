/* Faça um programa que leia em um vetor uma sequência finita de números
    digitados pelo usuário. Crie um segundo vetor que armazene o dobro de cada
    número do primeiro vetor e depois apresente os valores deste vetor. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] vetor1 = new int[5];
        int[] vetor2 = new int[5];

        for (int i = 0; i < vetor1.length; i++) {
            System.out.print("Digite o " + (i + 1) + "º número: ");
            vetor1[i] = scanner.nextInt();
            vetor2[i] = vetor1[i] * 2;
        }

        for (int i = 0; i < vetor2.length; i++) {
            System.out.println("Vetor[1]: " + vetor1[i] + " | Vetor[2]: " + vetor2[i]);
        }
        scanner.close();
    }
}
