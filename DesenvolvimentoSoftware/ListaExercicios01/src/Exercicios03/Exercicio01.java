/* Escrever um programa que leia o nome de um aluno e as notas das três
    provas que ele obteve no semestre. No final informar o nome do aluno e a sua
    média (aritmética). */

package Exercicios03;

import java.util.Scanner;

public class Exercicio01 {
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
        System.out.println("Média: " + media);

        scanner.close();
    }
}
