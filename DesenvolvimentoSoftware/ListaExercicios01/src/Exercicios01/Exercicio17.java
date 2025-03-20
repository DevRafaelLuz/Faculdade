/* Faça um algoritmo que receba o raio e a altura de um cilindro e retorne o
    seu volume calculado de acordo com a seguinte fórmula: volume = 3.14 * raio2
    * altura; */

package Exercicios01;

public class Exercicio17 {
    public static void main(String[] args) {
        double raio = 5.0;
        double altura = 10.0;
        double volume = 3.14 * Math.pow(raio, 2) * altura;
        
        System.out.println("Volume do cilindro: " + volume);
    }
}
