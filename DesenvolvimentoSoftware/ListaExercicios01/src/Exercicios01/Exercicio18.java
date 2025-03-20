/* Elabore um algoritmo que calcule a quantidade de litros de combustível gasta
    em uma viagem, utilizando um automóvel que faz 12km por litro e considerando
    que são fornecidos o tempo em hora e a velocidade média da viagem. */

package Exercicios01;

import java.util.Scanner;

public class Exercicio18 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double tempo, velocidadeMedia, distancia, litrosGastos;
        
        System.out.print("Informe o tempo da viagem em horas: ");
        tempo = scan.nextDouble();

        System.out.print("Informe a velocidade média da viagem em km/h: ");
        velocidadeMedia = scan.nextDouble();

        distancia = tempo * velocidadeMedia;
        litrosGastos = distancia / 12;

        System.out.println("A quantidade de litros gasta na viagem foi de: " + litrosGastos + " litros.");

        scan.close();
    }
}
