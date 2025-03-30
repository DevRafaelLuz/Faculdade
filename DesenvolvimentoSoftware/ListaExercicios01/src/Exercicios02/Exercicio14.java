/* Faça um programa que leia um vetor de 5 elementos e, após a leitura, posicione
    o maior elemento na última posição do vetor. Nenhum número do vetor pode ser
    apagado ou duplicado. Apresente o vetor atualizado na tela. */

package Exercicios02;

public class Exercicio14 {
    public static void main(String[] args) {
        int[] vetor = {3, 5, 1, 4, 2};
        int maior = vetor[0];
        int posicaoMaior = 0;

        for (int i = 1; i < vetor.length; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
                posicaoMaior = i;
            }
        }

        int temp = vetor[posicaoMaior];
        vetor[posicaoMaior] = vetor[vetor.length - 1];
        vetor[vetor.length - 1] = temp;

        System.out.print("Vetor atualizado: {");
        for (int i = 0; i < vetor.length; i++) {
            System.out.print(vetor[i]);
            if (i < vetor.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");
    }
}
