/* Crie uma estrutura chamada "Produto" que represente informações de um produto em estoque: nome (string), 
    quantidade em estoque (int) e preço unitário (float). Declare e inicialize um array de 5 elementos do tipo 
    "Produto". Em seguida, implemente uma função chamada "estoqueTotal" que recebe o array de produtos como parâmetro 
    e retorna a quantidade total de itens em estoque; */

#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int estoqueTotal(Produto p[]) {
    int itens = 0;

    for (int i = 0; i < 5; i++) {
        itens += p[i].quantidade;
    }

    return itens;
}

int main() {
    Produto p[5];

    for (int i = 0; i < 5; i++) {
        printf("=== PRODUTO %d ===\n", i + 1);
        fflush(stdin);
        printf("Informe o nome do produto: ");
        scanf("%[^\n]s", p[i].nome);
        printf("Informe a quantidade: ");
        scanf("%d", &p[i].quantidade);
        printf("Informe o preco: ");
        scanf("%f", &p[i].preco);
    }

    printf("Quantidade de itens total no estoque: %d", estoqueTotal(p));

    return 0;
}