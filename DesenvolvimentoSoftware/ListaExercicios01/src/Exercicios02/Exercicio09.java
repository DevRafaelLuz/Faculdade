/* Elabore um programa que leia os vetores A e B de 5 elementos e gere um vetor
    C de acordo com as seguintes regras:
    a. Os elementos das posições pares de C são os elementos das posições
    pares de A;
    b. Os elementos das posições ímpares de C são os elementos das posições
    ímpares de B; */

package Exercicios02;

public class Exercicio09 {
    public static void main(String[] args) {
        int[] A = {1, 2, 3, 4, 5};
        int[] B = {6, 7, 8, 9, 10};
        int[] C = new int[5];

        for (int i = 0; i < C.length; i++) {
            if (i % 2 == 0) {
                C[i] = A[i];
            } else {
                C[i] = B[i];
            }
        }

        System.out.print("Vetor C: ");
        for (int i : C) {
            System.out.print(i + " ");
        }
    }
}
