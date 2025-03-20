/* Escreva um algoritmo que leia um número de 1 a 5 e escreva-o por extenso.
    Caso o usuário digite um valor que não esteja neste intervalo, exibir a
    mensagem: “Número inválido!”. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio10 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num;

        System.out.print("Digite um número de 1 a 5: ");
        num = scan.nextInt();

        switch (num) {
            case 1:
                System.out.println("Um");
                break;
            case 2:
                System.out.println("Dois");
                break;
            case 3:
                System.out.println("Três");
                break;
            case 4:
                System.out.println("Quatro");
                break;
            case 5:
                System.out.println("Cinco");
                break;
            default:
                System.out.println("Número inválido!");
                break;
        }

        scan.close();
    }
}
