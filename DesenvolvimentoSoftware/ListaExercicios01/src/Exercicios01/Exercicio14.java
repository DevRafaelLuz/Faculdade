/* A expressão an = a1 + (n – 1) * r é denominada termo geral da Progressão
    Aritmética (PA). Nesta fórmula, temos que an é o termo de ordem n (n-ésimo
    termo), r é a razão e a1 é o primeiro termo da Progressão Aritmética. Escreva
    um algoritmo que encontre o n-ésimo termo de uma progressão aritmética.
    Exemplo: a1 = 10, n = 7, r = 3. Resultado: an = 28 */

package Exercicios01;

import java.util.Scanner;

public class Exercicio14 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a1, n, r, an;

        System.out.print("Digite o primeiro termo: ");
        a1 = scan.nextInt();

        System.out.print("Digite o n-ésimo termo: ");
        n = scan.nextInt();

        System.out.print("Digite a razão: ");
        r = scan.nextInt();

        an = a1 + (n - 1) * r;

        System.out.println("O " + n + "º termo é: " + an);

        scan.close();
    }
}
