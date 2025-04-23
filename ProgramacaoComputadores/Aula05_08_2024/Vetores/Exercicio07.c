/* Escreva um programa que possui um vetor para armazenar 10 inteiros. O programa deverá solicitar ao usuário para fornecer 
    os 10 inteiros, armazená-los no vetor e, então apresentar 3 informações sobre os dados armazenados:
    1. Maior valor;
    2. Menor valor;
    3. Média dos valores; */

    #include <stdio.h>

    int main() {
        int vetor[10];
        int i, valor, maior, menor, media = 0, soma = 0;

        for (i = 0; i < 10; i++) {
            printf("Digite um numero: ");
            scanf("%d", &valor);
            vetor[i] = valor;

            soma += vetor[i];
        }

        maior = vetor[0];
        menor = vetor[0];

        for (i = 0; i < 10; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }

        media = soma / 10;

        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
        printf("Media dos valores: %d", media);

        return 0;
    }