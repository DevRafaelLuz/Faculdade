/* Elabore um programa que leia 5 números do teclado e os armazene em um
    vetor. Em seguida, leia um número n qualquer e apresente na tela a quantidade de
    vezes que o número n aparece no vetor. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio05 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numeros = new int[5];
        int n, contador = 0;

        for (int i = 0; i < numeros.length; i++) {
            System.out.print("Digite o " + (i + 1) + "º número: ");
            numeros[i] = scanner.nextInt();
        }

        System.out.print("Digite um número n: ");
        n = scanner.nextInt();

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == n) {
                contador++;
            }
        }
        System.out.println("O número " + n + " aparece " + contador + " vez(es) no vetor.");
        scanner.close();
    }
}
