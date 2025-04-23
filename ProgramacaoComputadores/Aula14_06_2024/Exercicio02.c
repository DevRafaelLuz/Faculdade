#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct cidades {
    char nome[50];
    float renda, idh, populacao;
};


int main() {
    int qtdaCidades, compara;
    float media, soma = 0.0, maiorPopulacao;
    char verificarNome[50];

    printf("Quantas cidades serao cadastradas: ");
    scanf("%d", &qtdaCidades);

    struct cidades c[qtdaCidades];

    for (int i = 0; i < qtdaCidades; i++) {
        printf("--- Registro da cidade %d ---\n", i + 1);
        fflush(stdin);
        printf("Digite o nome da cidade: ");
        scanf("%[^\n]s", c[i].nome);
        printf("Informe a rende per capita da cidade: ");
        scanf("%f", &c[i].renda);
        printf("Qual eh o IDH da cidade: ");
        scanf("%f", &c[i].idh);
        printf("Qual eh a populacao da cidade: ");
        scanf("%f", &c[i].populacao);

        soma += c[i].renda;
    }

    media = soma / qtdaCidades;

    printf("Media da rende per capita: %.1f\n", media);

    maiorPopulacao = c[0].populacao;
    for (int j = 1; j < qtdaCidades; j++) {
        if (c[j].populacao > maiorPopulacao) {
            maiorPopulacao = c[j].populacao;
        }
    }

    printf("Cidade com maior populacao: ");
    for (int h = 0; h < qtdaCidades; h++) {
        if (c[h].populacao == maiorPopulacao) {
            printf("%s", c[h].nome);
        }
    }

    fflush(stdin);
    printf("\nDigite o nome da cidade que deseja verificar os dados: ");
    scanf("%[^\n]s", verificarNome);

    for (int f = 0; f < qtdaCidades; f++) {
        compara = strcmp(verificarNome, c[f].nome);

        if (compara == 0) {
            printf("Nome da cidade: %s\nRenda per capita: %.1f\nIDH: %.1f\nPopulacao: %.1f", c[f].nome, c[f].renda, c[f].idh, c[f].populacao);
            break;
        }
    }

    if (compara != 0) {
        printf("Cidade nao registrada!");
    }

    return 0;
}