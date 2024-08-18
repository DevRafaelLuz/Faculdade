/* 16. Duelo de Sabres de Luz - Crie uma estrutura chamada "Jedi" que represente as informações de um Jedi: nome (string), 
    nível de habilidade (int) e cor do sabre de luz (string). Declare um array de 3 elementos do tipo "Jedi" e preencha o array 
    com dados de 3 Jedis diferentes. Em seguida, implemente as seguintes funcionalidades:
        1. Função "mostrarInformacoes": Recebe o array de Jedis como parâmetro e imprime na tela as informações de todos os Jedis cadastrados.
        2. Função "jediMaisHabilidoso": Recebe o array de Jedis como parâmetro e retorna o nome do Jedi com o maior nível de habilidade.
        3. Função "dueloDeSabres": Recebe o array de Jedis como parâmetro e simula um duelo de sabres de luz entre dois Jedis. 
            A função deve receber como entrada os índices dos Jedis que irão duelar e imprimir na tela o resultado do duelo, ou seja, 
            qual Jedi venceu o duelo com base em seus níveis de habilidade. */

#include <stdio.h>

typedef struct {
    char nome[100];
    int habilidade;
    char cor[20];
} Jedi;

void mostrarInformacoes(Jedi j[]) {
    for (int i = 0; i < 3; i++) {
        printf("=== DADOS DO JEDI %d ===\n", i + 1);
        printf("Nome: %s\n", j[i].nome);
        printf("Nivel de habilidade: %d\n", j[i].habilidade);
        printf("Cor do sabre de luz: %s\n", j[i].cor);
    }
}

void jediMaisHabilidoso(Jedi j[]) {
    int habilidade = j[0].habilidade;
    int i;

    for (i = 1; i < 3; i++) {
        if (j[i].habilidade > habilidade) {
            habilidade = j[i].habilidade;
        }
    }

    for (i = 0; i < 4; i++) {
        if (j[i].habilidade == habilidade) {
            printf("> Jedi com o maior nivel de habilidade: %s\n", j[i].nome);
            break;
        }
    }  
}

void dueloMaisComum(Jedi j[]) {
    int indice1 = -1, indice2 = -1;

    while (indice1 == indice2 || (indice1 < 0 || indice1 > 2) || (indice2 < 0 || indice2 > 2)) {
        printf("Informe o indice do Jedi 1 (0-2): ");
        scanf("%d", & indice1);
        printf("Informe o indice do Jedi 2 (0-2): ");
        scanf("%d", &indice2);
    }

    if (j[indice1].habilidade > j[indice2].habilidade) {
        printf("Jedi 1 ganhou");
    } else if (j[indice1].habilidade == j[indice2].habilidade) {
        printf("Empate");
    } else {
        printf("Jedi 2 ganhou");
    }
}

int main() {
    Jedi j[3];

    for (int i = 0; i < 3; i++) {
        printf("> %d%c JEDI  <\n", i + 1, 167);
        fflush(stdin);
        printf("Informe o nome: ");
        scanf("%[^\n]s", j[i].nome);
        printf("Informe o nivel de habilidade: ");
        scanf("%d", &j[i].habilidade);
        fflush(stdin);
        printf("Informe a cor do sabre de luz: ");
        scanf("%[^\n]s", j[i].cor);
    }

    mostrarInformacoes(j);
    jediMaisHabilidoso(j);
    dueloMaisComum(j);

    return 0;
}