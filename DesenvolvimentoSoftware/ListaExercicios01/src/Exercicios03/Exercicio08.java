/* Ler 80 números e ao final informar quantos número(s) est(á)ão no
    intervalo entre 10 (inclusive) e 150 (inclusive). */

package Exercicios03;

import java.util.Random;

public class Exercicio08 {
    public static void main(String[] args) {
        Random random = new Random();
        int count = 0;
        int[] numbers = new int[80];

        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = random.nextInt(300);
            if (numbers[i] > 9 && numbers[i] < 151) {
                count++;
            }
        }
        System.out.println("Quantidade de números no intervalo entre 10 e 150: " + count);
    }
}
