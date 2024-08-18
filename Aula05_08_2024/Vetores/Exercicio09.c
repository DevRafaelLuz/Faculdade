/* 12. Você está avaliando as medidas de comprimento de uma peça. Várias medições foram feitas em peças de um lote 
    (uma medição para o comprimento de cada peça). Elabore um programa que lê todas as medidas e armazena em um vetor V. 
    O programa deve ler também a medida desejável da peça, a tolerância e gerar um outro vetor com as medidas lidas válidas 
    (dentro da tolerância). O programa deve exibir o vetor de medidas válidas e a quantidade de medidas válidas. Veja o 
    exemplo ilustrativo abaixo:
        1. Vetor com medições = {10, 5, 3, 5.5, 7, 6, 8, 12, 3, 9} em mm;
        2. Medida desejável = 7mm;
        3. Tolerância = 2mm (para mais e para menos);
        4. Vetor gerado com medições válidas = {5, 5.5 , 7, 6, 8, 9} em mm;
        5. Quantidade de medições válidas = 6; */

#include <stdio.h>

int main() {
    float medicoes[10], medidaDesejavel, tolerancia;
    int medidasValidas = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Informe as medicoes: ");
        scanf("%f", &medicoes[i]);
    }

    printf("Informe a medida desejavel: ");
    scanf("%f", &medidaDesejavel);
    printf("Tolerancia: ");
    scanf("%f", &tolerancia);
    
    for (i = 0; i < 10; i++) {
        if (medicoes[i] <= medidaDesejavel + tolerancia && medicoes[i] >= medidaDesejavel - tolerancia) {
            medidasValidas++;
        }
    }

    float medicoesValidas[medidasValidas];

    printf("Medicoes validas: ");
    for (i = 0; i < 10; i++) {
        if (medicoes[i] <= medidaDesejavel + tolerancia && medicoes[i] >= medidaDesejavel - tolerancia) {
            medicoesValidas[i] = medicoes[i];
            printf("%.1f  ", medicoesValidas[i]);
        }
    }

    printf("\nQuantidades de medidas validas: %d", medidasValidas);

    return 0;
}