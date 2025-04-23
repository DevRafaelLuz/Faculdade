/* Escreva um programa que possui um vetor (Vet) de 10 inteiros e uma variável do tipo inteiro (x). O usuário deverá 
    fornecer os 10 valores para preencher o vetor Vet, e em seguida, fornecer um valor inteiro para ser armazenado em x. 
    O programa deverá verificar a quantidade de vezes que aparece o valor de x no vetor Vet e informar na tela; */

#include <stdio.h>

int main() {
    int Vet[10];
    int valor, i , x, contador = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);
        Vet[i] = valor;       
    }

    printf("Digite uma valor para X: ");
    scanf("%d", &x);

    for (i = 0; i < 10; i++) {        
        if (Vet[i] == x) {
            contador++;
        }
    }

    printf("O numero %d aparece %d vezes no vetor.", x, contador);

    return 0;
}