/* Escrever um programa que leia o nome e as três notas obtidas por um
    aluno durante o semestre. Calcular a sua média (aritmética), informar o nome e
    sua menção aprovado (media >= 7), Reprovado (media <= 5) e Recuperação
    (media entre 5.1 a 6.9). */

package Exercicios03;

import java.util.Scanner;

public class Exercicio07 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nome;
        double nota1, nota2, nota3, media;

        System.out.print("Digite o nome do aluno: ");
        nome = scanner.nextLine();
        System.out.print("Digite a nota da primeira prova: ");
        nota1 = scanner.nextDouble();
        System.out.print("Digite a nota da segunda prova: ");
        nota2 = scanner.nextDouble();
        System.out.print("Digite a nota da terceira prova: ");
        nota3 = scanner.nextDouble();

        media = (nota1 + nota2 + nota3) / 3;

        System.out.println("Nome do aluno: " + nome);

        if (media > 6.9) {
            System.out.println("Menção: Aprovado");
        } else if (media < 5.1) {
            System.out.println("Menção: Reprovado");
        } else {
            System.out.println("Menção: Recuperação");
        }

        scanner.close();
    }
}
