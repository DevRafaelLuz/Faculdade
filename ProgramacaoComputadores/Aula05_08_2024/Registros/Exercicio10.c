/* Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço. Leia um valor p e 
    mostre as informações de todos os carros com preço menor que p. Repita este processo até que seja lido um valor p = 0; */

#include <stdio.h>

typedef struct {
    char marca[15];
    int ano;
    float preco;
} Carros;

int main() {
    Carros c[5];
    int i;
    float p;

    do {
        for (i = 0; i < 5; i++) {
            printf("=== CARRO %d ===\n", i + 1);
            fflush(stdin);
            printf("Informe o marca do carro: ");
            scanf("%[^\n]s", c[i].marca);
            printf("Informe o ano: ");
            scanf("%d", &c[i].ano);
            printf("Informe o preco: ");
            scanf("%f", &c[i].preco);
        }

        printf("Informe um valor para p: ");
        scanf("%f", &p);

        printf("> Carros com preco menor que p <\n");
        for (i = 0; i < 5; i++) {
            if (c[i].preco < p) {
                printf("Marca: %s\n", c[i].marca);
                printf("Ano: %d\n", c[i].ano);
                printf("Preco: %.2f\n", c[i].preco);
                printf("-------------------------\n");
            }
        }
    } while (p != 0.0);

    return 0;
}