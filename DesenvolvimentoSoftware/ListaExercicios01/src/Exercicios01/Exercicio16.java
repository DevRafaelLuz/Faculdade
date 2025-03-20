/* Elabore um algoritmo que receba três notas de um aluno os pesos
    referentes a cada nota e retorne a sua média ponderada. Veja o cálculo da média
    ponderada:
        𝑀é𝑑𝑖𝑎 𝑝𝑜𝑛𝑑𝑒𝑟𝑎𝑑𝑎 = 𝑛𝑜𝑡𝑎1 ∗ 𝑝𝑒𝑠𝑜1 + 𝑛𝑜𝑡𝑎2 ∗ 𝑝𝑒𝑠𝑜2 + 𝑛𝑜𝑡𝑎3 ∗ 𝑝𝑒𝑠𝑜3
        𝑝𝑒𝑠𝑜1 + 𝑝𝑒𝑠𝑜2 + 𝑝𝑒𝑠𝑜3

    Exemplo: nota1 = 10, nota2 = 5.5, nota3 = 8, peso1 = 5, peso2 = 3, peso3 = 2
    Média ponderada = 8.25 */

package Exercicios01;

public class Exercicio16 {
    public static void main(String[] args) {
        double nota1 = 10.0;
        double nota2 = 5.5;
        double nota3 = 8.0;
        double peso1 = 5.0;
        double peso2 = 3.0;
        double peso3 = 2.0;
        double mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
        
        System.out.println("Média ponderada: " + mediaPonderada);
    }
}
