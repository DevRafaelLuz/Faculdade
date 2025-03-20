/* Escreva um algoritmo que leia um número e diga, através de uma
    mensagem, se este número está no intervalo entre 100 e 200. Caso o número
    esteja fora do intervalo o usuário também deverá ser informado. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio07 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numero;

        System.out.print("Digite um número: ");
        numero = scan.nextInt();

        if (numero >= 100 && numero <= 200) {
            System.out.println("O número " + numero + " está no intervalo entre 100 e 200.");
        } else {
            System.out.println("O número " + numero + " está fora do intervalo entre 100 e 200.");
        }

        scan.close();
    }
}
