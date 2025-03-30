/* Elabore um algoritmo que calcule o produto escalar entre dois vetores de inteiros
    de tamanho igual a 5. Exemplo: {0, 2, 4, 6, 8}, {1, 3, 5, 7, 9} = 0*1 + 2*3 + 4*5 + 6*7 +
    8*9 = 140 */

package Exercicios02;

public class Exercicio11 {
    public static void main(String[] args) {
        int[] A = {0, 2, 4, 6, 8};
        int[] B = {1, 3, 5, 7, 9};
        int produtoEscalar = 0;

        for (int i = 0; i < A.length; i++) {
            produtoEscalar += A[i] * B[i];
        }

        System.out.println("Produto escalar: " + produtoEscalar);
    }
}
