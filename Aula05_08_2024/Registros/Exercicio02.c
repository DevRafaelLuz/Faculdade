/* Crie uma estrutura chamada "Contato" que represente os seguintes dados de um contato: nome (string) e telefone (string). 
    Em seguida, declare um array de 5 elementos do tipo "Contato". Preencha o array com os dados de 5 contatos e, por fim, 
    imprima a lista de contatos cadastrados; */

#include <stdio.h>

struct Contato {
    char nome[100];
    char telefone[20];
};

int main() {
    int i, tamanho = 5;
    struct Contato contato[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("--- CONTATO %d ---\n", i + 1);
        printf("Digite o nome: ");
        fflush(stdin);
        scanf("%[^\n]s", contato[i].nome);
        printf("Digite o telefone: ");
        fflush(stdin);
        scanf("%[^\n]s", contato[i].telefone);
    }

    printf("\n> LISTA DE CONTATOS <\n");
    for (i = 0; i < tamanho; i++) {        
        printf("Nome: %s\n", contato[i].nome);
        printf("Telefone: %s\n", contato[i].telefone);
        printf("-----------------\n");
    }

    return 0;
}