/* Escreva um algoritmo que leia os valores de dois números inteiros distintos
    nas variáveis A e B e informe qual deles é o maior. Caso os números sejam
    iguais informar ao usuário que a sequência de números informados é inválida. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio03 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.println("Digite o valor de A: ");
        a = sc.nextInt();
        System.out.println("Digite o valor de B: ");
        b = sc.nextInt();

        if (a > b) {
            System.out.println("O valor de A é maior que o valor de B.");
        } else if (b > a) {
            System.out.println("O valor de B é maior que o valor de A.");
        } else {
            System.out.println("Os valores informados são inválidos.");
        }
        sc.close();
    }
}
