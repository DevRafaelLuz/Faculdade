// Escreva um algoritmo que leia três valores inteiros distintos e escreva-os em ordem crescente.

package Exercicios01;

import java.util.Scanner;

public class Exercicio11 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a, b, c;

        System.out.print("Digite o primeiro número: ");
        a = scan.nextInt();

        System.out.print("Digite o segundo número: ");
        b = scan.nextInt();

        System.out.print("Digite o terceiro número: ");
        c = scan.nextInt();

        if (a < b && a < c) {
            if (b < c) {
                System.out.println(a + ", " + b + ", " + c);
            } else {
                System.out.println(a + ", " + c + ", " + b);
            }
        } else if (b < a && b < c) {
            if (a < c) {
                System.out.println(b + ", " + a + ", " + c);
            } else {
                System.out.println(b + ", " + c + ", " + a);
            }
        } else {
            if (a < b) {
                System.out.println(c + ", " + a + ", " + b);
            } else {
                System.out.println(c + ", " + b + ", " + a);
            }
        }

        scan.close();
    }
}
