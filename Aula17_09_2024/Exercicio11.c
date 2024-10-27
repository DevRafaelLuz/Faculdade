/* Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete. O programa então 
    compara quantos números o jogador acertou. Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números 
    corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os números sorteados e os seus números corretos. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int loteria[6], bilhete[6];
    int i, j, acertos = 0, duplicado;

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));

    printf("Numeros sorteados: \n");
    for (i = 0; i < 6; i++) {
        do {
            duplicado = 0;
            loteria[i] = rand() % 10;

            // Verifica se o número já foi gerado
            for (j = 0; j < i; j++) {
                if (loteria[i] == loteria[j]) {
                    duplicado = 1;
                    break;
                }
            }
        } while (duplicado);
        printf("%d ", loteria[i]);  
    }

    for (i = 0; i < 6; i++) {
        printf("Digite o numero %d do bilhete: ", i + 1);
        scanf("%d", &bilhete[i]);

        for (j = 0; j < 6; j++) {
            if (bilhete[i] == loteria[j]) {
                acertos++;
            }
        }        
    }

    int *vetor = (int*) malloc(acertos * sizeof(int));

    if (vetor != NULL) {
        for (i = 0; i < acertos; i++) {
            for (j = 0; j < 6; j++) {
                if (bilhete[i] == loteria[j]) {
                    vetor[i] = bilhete[i];
                }
            }            
        }

        printf("\nNumeros corretos: \n");
        for (i = 0; i < acertos; i++) {
            printf("%d ", vetor[i]);
        }
    } else {
        printf("Erro ao alocar memoria!");
        return 1;
    }    

    free(vetor);

    return 0;
}