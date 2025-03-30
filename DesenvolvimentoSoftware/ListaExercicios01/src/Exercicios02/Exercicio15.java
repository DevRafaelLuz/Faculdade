/* Elabore um algoritmo que leia 5 números do teclado e preencha um vetor de
    acordo com a seguinte regra: com exceção do 1º número, só é permitido armazenar
    um número se ele for maior que o anterior. Ex.: se o primeiro valor lido for 5, o próximo
    valor lido só poderá ser maior que 5. */

package Exercicios02;

import java.util.Scanner;

public class Exercicio15 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] vetor = new int[5];

        for (int i = 0; i < vetor.length; i++) {
            if (i == 0) {
                System.out.print("Digite o primeiro número: ");
            } else {
                System.out.print("Digite um número maior que " + vetor[i - 1] + ": ");
            }
            int numero = scanner.nextInt();

            if (i > 0 && numero <= vetor[i - 1]) {
                System.out.println("Número inválido. Tente novamente.");
                i--;
            } else {
                vetor[i] = numero;
            }
        }
        scanner.close();
    }
}
