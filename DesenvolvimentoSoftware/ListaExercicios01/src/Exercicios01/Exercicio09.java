/* Leia dois números nas variáveis A e B e identifique se os valores são iguais
    ou diferentes. Caso eles sejam iguais imprima uma mensagem dizendo que são
    iguais. Caso sejam diferentes, informe que são diferentes e qual número é o
    maior. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio09 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a, b;

        System.out.print("Digite o primeiro número: ");
        a = scan.nextInt();

        System.out.print("Digite o segundo número: ");
        b = scan.nextInt();

        if (a == b) {
            System.out.println("Os números são iguais.");
        } else {
            System.out.println("Os números são diferentes.");
            if (a > b) {
                System.out.println("O número " + a + " é maior que o número " + b + ".");
            } else {
                System.out.println("O número " + b + " é maior que o número " + a + ".");
            }
        }

        scan.close();
    }
}
