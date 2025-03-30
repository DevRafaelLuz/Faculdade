/* Construa um programa que leia em um vetor uma sequência de 5 números
    digitados pelo usuário, calcule a média destes valores, e depois apresente na tela
    quais valores que são menores, iguais ou superiores à média. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double[] numeros = new double[5];
        double soma = 0;
        double media;
        
        for (int i = 0; i < numeros.length; i++) {
            System.out.print("Digite o " + (i + 1) + "º número: ");
            numeros[i] = scanner.nextDouble();
            soma += numeros[i];
        }

        media = soma / numeros.length;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] < media) {
                System.out.println(numeros[i] + " é menor que a média (" + media + ")");
            } else if (numeros[i] == media) {
                System.out.println(numeros[i] + " é igual à média (" + media + ")");
            } else {
                System.out.println(numeros[i] + " é maior que a média (" + media + ")");
            }
        }
        scanner.close();
    }
}