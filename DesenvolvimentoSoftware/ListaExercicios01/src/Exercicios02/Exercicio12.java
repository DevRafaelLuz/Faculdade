/* Elabore um programa que leia um vetor de 12 elementos apresente na tela o
    produto dos elementos pares positivos (desconsiderar o zero). Exemplo: {0, 5, 8, 1, -
    6, 4, -7, 9, 10, -14, 3, 12} = 8 * 4 * 10 * 12 = 3840 */

package Exercicios02;

public class Exercicio12 {
    public static void main(String[] args) {
        int[] vetor = {0, 5, 8, 1, -6, 4, -7, 9, 10, -14, 3, 12};
        int produto = 1;
        boolean encontrouParPositivo = false;

        for (int i = 0; i < vetor.length; i++) {
            if (vetor[i] > 0 && vetor[i] % 2 == 0) {
                produto *= vetor[i];
                encontrouParPositivo = true;
            }
        }

        if (encontrouParPositivo) {
            System.out.println("Produto dos elementos pares positivos: " + produto);
        } else {
            System.out.println("Nenhum elemento par positivo encontrado.");
        }
    }
}
