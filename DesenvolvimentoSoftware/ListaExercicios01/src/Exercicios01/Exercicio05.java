/* Leia valores nas variáveis A e B, e efetue a troca dos valores de forma que
    o valor da variável A passe a ser o valor da variável B e o valor da variável B
    passe a ser o valor da variável A. Apresentar uma mensagem com o valor original
    de cada variável e outra com os valores trocados. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio05 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Digite o valor de A: ");
        int a = scan.nextInt();

        System.out.print("Digite o valor de B: ");
        int b = scan.nextInt();

        System.out.println("Valor de A: " + a);
        System.out.println("Valor de B: " + b);

        int aux = a;
        a = b;
        b = aux;

        System.out.println("Valor de A: " + a);
        System.out.println("Valor de B: " + b);

        scan.close();
    }   
}
