/* Escrever um programa para determinar o consumo médio de um
    automóvel sendo fornecida a distância total percorrida pelo automóvel e o total
    de combustível gasto. */

package Exercicios03;

import java.util.Scanner;

public class Exercicio02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double distancia, combustivel, consumoMedio;

        System.out.print("Digite a distância total percorrida (em km): ");
        distancia = scanner.nextDouble();
        System.out.print("Digite o total de combustível gasto (em litros): ");
        combustivel = scanner.nextDouble();

        consumoMedio = distancia / combustivel;

        System.out.println("Consumo médio: " + consumoMedio + " km/l");

        scanner.close();
    }
}
