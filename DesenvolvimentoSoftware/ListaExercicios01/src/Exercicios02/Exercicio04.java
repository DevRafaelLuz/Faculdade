/* Elabore um programa que leia um vetor de 5 números digitados pelo usuário e
    uma variável de um número n qualquer, depois mostre na tela o índice dos
    elementos que são inferiores a n. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numeros = new int[5];
        int n;

        for (int i = 0; i < numeros.length; i++) {
            System.out.print("Digite o " + (i + 1) + "º número: ");
            numeros[i] = scanner.nextInt();
        }

        System.out.print("Digite um número n: ");
        n = scanner.nextInt();

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] < n) {
                System.out.println("O número " + numeros[i] + " na posição " + i + " é inferior a " + n);
            }
        }
        scanner.close();
    }
}
