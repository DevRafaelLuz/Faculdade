/* Crie uma estrutura chamada "Livro" que represente as informações de um livro: título (string), autor (string), 
    ano de publicação (int) e preço (float). Em seguida, declare um array de 3 elementos do tipo "Livro". Preencha o 
    array com os dados de 3 livros e implemente uma função chamada "maisCaro" que recebe o array de livros como parâmetro 
    e retorna o título do livro mais caro; */

#include <stdio.h>

typedef struct {
    char titulo[255];
    char autor[100];
    int anoPublicacao;
    float preco;
} Livro;

void exibirLivroMaisCaro(Livro livro[], int tamanho) {
    float valor = livro[0].preco;
    int i;

    for (i = 1; i < tamanho; i++) {
        if (livro[i].preco > valor) {
            valor = livro[i].preco;
        }
    }

    for (i = 0; i < tamanho; i++) {
        if (livro[i].preco == valor) {
            printf("> Titulo do livro mais caro: %s", livro[i].titulo);
            break;
        }
    }    
}

int main() {
    int tamanho = 3, i;
    Livro livro[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("=== LIVRO %d ===\n", i + 1);
        fflush(stdin);
        printf("Informe o titulo do livro: ");
        scanf("%[^\n]s", livro[i].titulo);
        fflush(stdin);
        printf("Informe o nome do autor: ");
        scanf("%[^\n]s", livro[i].autor);
        printf("Informe o ano de publicacao: ");
        scanf("%d", &livro[i].anoPublicacao);
        printf("Informe o preco do livro: ");
        scanf("%f", &livro[i].preco);
    }

    exibirLivroMaisCaro(livro, tamanho);

    return 0;
}