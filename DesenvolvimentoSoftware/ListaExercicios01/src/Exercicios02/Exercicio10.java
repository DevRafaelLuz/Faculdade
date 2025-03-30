/* Crie um programa que leia um vetor A de 5 posições e, ao final da leitura, copie
    os elementos de A em B de forma invertida. Ou seja, o primeiro elemento de A é o
    último elemento de B, o segundo elemento de A é o penúltimo elemento de B, e assim
    por diante. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] A = new int[5];
        int[] B = new int[5];

        for (int i = 0; i < A.length; i++) {
            System.out.print("Digite o elemento " + (i + 1) + " do vetor A: ");
            A[i] = scanner.nextInt();
        }

        for (int i = 0; i < A.length; i++) {
            B[i] = A[A.length - 1 - i];
        }

        System.out.print("Vetor B (invertido): ");
        for (int i = 0; i < B.length; i++) {
            System.out.print(B[i] + " ");
        }
        scanner.close();
    }
}
