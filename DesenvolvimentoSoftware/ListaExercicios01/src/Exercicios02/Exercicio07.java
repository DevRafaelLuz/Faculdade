/* Faça um programa que leia dois vetores de 5 elementos cada e verifique se eles
    são iguais ou não. Para serem iguais, todos os elementos dos dois vetores devem
    coincidir. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio07 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] vetor1 = new int[5];
        int[] vetor2 = new int[5];
        boolean iguais = true;

        for (int i = 0; i < vetor1.length; i++) {
            System.out.print("Digite o elemento " + (i + 1) + " do primeiro vetor: ");
            vetor1[i] = scanner.nextInt();
        }

        for (int i = 0; i < vetor2.length; i++) {
            System.out.print("Digite o elemento " + (i + 1) + " do segundo vetor: ");
            vetor2[i] = scanner.nextInt();
        }

        for (int i = 0; i < vetor1.length; i++) {
            if (vetor1[i] != vetor2[i]) {
                iguais = false;
                break;
            }
        }

        if (iguais) {
            System.out.println("Os vetores são iguais.");
        } else {
            System.out.println("Os vetores são diferentes.");
        }
        scanner.close();
    }
}
