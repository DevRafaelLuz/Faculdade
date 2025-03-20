/* Escreva um algoritmo que leia valores REAIS nas variáveis A e B e o tipo
    de operador em outra variável do tipo CARACTERE. Imprima o resultado da
    operação de A por B se o operador aritmético for válido; caso contrário deve ser
    impresso uma mensagem de operador não definido. Tratar erro de divisão por zero. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio13 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double a, b;
        char operador;

        System.out.print("Digite o valor de A: ");
        a = scan.nextDouble();

        System.out.print("Digite o valor de B: ");
        b = scan.nextDouble();

        System.out.print("Digite o operador: ");
        operador = scan.next().charAt(0);

        switch (operador) {
            case '+':
                System.out.println("Resultado: " + (a + b));
                break;
            case '-':
                System.out.println("Resultado: " + (a - b));
                break;
            case '*':
                System.out.println("Resultado: " + (a * b));
                break;
            case '/':
                if (b == 0) {
                    System.out.println("Erro: divisão por zero.");
                } else {
                    System.out.println("Resultado: " + (a / b));
                }
                break;
            default:
                System.out.println("Operador não definido.");
        }

        scan.close();
    }
}
