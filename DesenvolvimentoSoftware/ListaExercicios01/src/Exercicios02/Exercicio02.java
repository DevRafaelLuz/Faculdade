/* Escreva um algoritmo que leia em um vetor uma sequência finita de números
    digitados pelo usuário e, logo após, mostre o número de cada posição do vetor e se
    ele é positivo, negativo ou zero. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numeros = new int[10];

        for (int i = 0; i < numeros.length; i++) {
            System.out.print("Digite o número " + (i + 1) + ": ");
            numeros[i] = scanner.nextInt();
        }
        
        for (int index : numeros) {
            if (index > 0) {
                System.out.println("O número " + index + " é positivo.");
            } else if (index < 0) {
                System.out.println("O número " + index + " é negativo.");
            } else {
                System.out.println("O número " + index + " é zero.");
            }
        }
        scanner.close();
    }
}
