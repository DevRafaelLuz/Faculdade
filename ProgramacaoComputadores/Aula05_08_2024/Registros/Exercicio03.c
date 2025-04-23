/* Defina uma estrutura que irá representar bandas de música:
    1. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição 
        do ranking essa banda está dentre as suas 5 bandas favoritas;
    2. Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher, 
        exiba todas as informações das bandas/estruturas;
    3. Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da 
        banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
    4. Crie uma função em C que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking.
        Que função da string.h você usaria para comparar as strings que representam o tipo de banda;
    5. Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
    6. Agora junte tudo e crie uma mega aplicação em que exibe um menu com as opções de preencher as estruturas e todas 
        as opções das questões passadas; */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char tipoMusica[20];
    int integrantes;
    int ranking;
} Banda;

void exibirBandaPeloRanking(Banda banda[], int tamanho) {
    int numero;

    do {
        printf("Informe um numero de 1 a 5 para exibir a banda: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 5);

    for (int i = 0; i < tamanho; i++) {
        if (i + 1 == numero) {
            printf("=== DADOS DA BANDA %d ===\n", numero);
            printf("%s\n", banda[i].nome);
            printf("%s\n", banda[i].tipoMusica);
            printf("%d\n", banda[i].integrantes);
            printf("%d\n", banda[i].ranking);
            break;
        }
    }
}

void exibirBandaPeloTipo(Banda banda[], int tamanho) {
    char tipoMusica[100];

    printf("Informe o tipo da banda: ");
    fflush(stdin);
    scanf("%s", &tipoMusica[0]);

    for (int i = 0; i < tamanho; i++) {
        int comparacao = strcmp(tipoMusica, banda[i].tipoMusica);

        if (comparacao == 0) {
            printf("=== DADOS DA BANDA ===\n");
            printf("%s\n", banda[i].nome);
            printf("%s\n", banda[i].tipoMusica);
            printf("%d\n", banda[i].integrantes);
            printf("%d\n", banda[i].ranking);
        }
    }    
}

void verificarSeBandaEhFavorita (Banda banda[], int tamanho) {
    char nome[100];

    printf("Informe o nome da banda: ");
    fflush(stdin);
    scanf("%s", &nome[0]);

    for (int i = 0; i < tamanho; i++) {
        int comparacao = strcmp(nome, banda[i].nome);

        if (comparacao == 0) {
            if (banda[i].ranking < 6) {
                printf("A banda %s esta entre suas favoritas\n", banda[i].nome);
            } else {
                printf("A banda %s nao esta entre suas favoritas\n", banda[i].nome);
            }
            break;
        }
    } 
}

int main() {
    int tamanho = 2;
    Banda banda[tamanho];
    int i, opcao;

    for (i = 0; i < tamanho; i++) {
        printf("> CADASTRO DA BANDA  %d < \n", i + 1);
        printf("Informe o nome da banda: ");
        fflush(stdin);
        scanf("%[^\n]s", banda[i].nome);
        printf("Informe o tipo da musica: ");
        fflush(stdin);
        scanf("%[^\n]s", banda[i].tipoMusica);
        printf("Informe o numero de integrantes: ");
        scanf("%d", &banda[i].integrantes);
        printf("Informe a posicao do ranking da banda: ");
        scanf("%d", &banda[i].ranking);
    }

    for (i = 0; i < tamanho; i++) {
        printf("=== DADOS DA BANDA %d ===\n", i + 1);
        printf("Nome: %s\n", banda[i].nome);
        printf("Tipo da musica: %s\n", banda[i].tipoMusica);
        printf("Intergrantes: %d\n", banda[i].integrantes);
        printf("Ranking: %d\n", banda[i].ranking);
    }

    do {
        printf("[1] Exibir banda pelo ranking - [2] Exibir banda pelo tipo de musica - [3] Verificar se banda esta entre as favoritas - [4] Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                exibirBandaPeloRanking(banda, tamanho);
                break;
            case 2:
                exibirBandaPeloTipo(banda, tamanho);
                break;
            case 3:
                verificarSeBandaEhFavorita(banda, tamanho);
                break;
            default:
                break;
        }
    } while (opcao != 4);

    return 0;
}