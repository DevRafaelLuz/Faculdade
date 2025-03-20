// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.

package Exercicios01;

import java.util.Scanner;

public class Exercicio06 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double celsius, fahrenheit;

        System.out.print("Digite a temperatura em graus Celsius: ");
        celsius = scan.nextDouble();

        fahrenheit = (9 * celsius + 160) / 5;

        System.out.println("A temperatura em graus Fahrenheit é: " + fahrenheit);

        scan.close();
    }
}
