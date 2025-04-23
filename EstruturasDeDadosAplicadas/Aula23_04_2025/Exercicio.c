#include <stdio.h>

#define MAX 100

typedef struct No {
    int valor;
    struct No* prox;
    struct No* ant;
} No;

typedef struct {
    No elementos[MAX];
    No* inicio;
    int tamanho;
} ListaCircular;

void inicializarLista(ListaCircular* lista) {
    lista->inicio = NULL;
    lista->tamanho = 0;
}

No* obterNo(ListaCircular* lista, int indice) {
    if (indice < 0 || indice >= lista->tamanho) return NULL;
    return &lista->elementos[indice];
}

void inserirOrdenado(ListaCircular* lista, int valor) {
    if (lista->tamanho == MAX) {
        printf("Lista cheia!\n");
        return;
    }

    int posicao = lista->tamanho;
    lista->elementos[posicao].valor = valor;

    if (lista->inicio == NULL) {
        lista->inicio = &lista->elementos[posicao];
        lista->elementos[posicao].prox = lista->inicio;
        lista->elementos[posicao].ant = lista->inicio;
    } else {
        No* atual = lista->inicio;
        No* anterior = atual->ant;

        while (atual->valor < valor && atual->prox != lista->inicio) {
            anterior = atual;
            atual = atual->prox;
        }

        lista->elementos[posicao].prox = atual;
        lista->elementos[posicao].ant = anterior;
        anterior->prox = &lista->elementos[posicao];
        atual->ant = &lista->elementos[posicao];

        if (valor < lista->inicio->valor) {
            lista->inicio = &lista->elementos[posicao];
        }
    }
    lista->tamanho++;
}

void removerElemento(ListaCircular* lista, int valor) {
    if (lista->tamanho == 0) {
        printf("Lista vazia!\n");
        return;
    }

    No* atual = lista->inicio;
    No* encontrado = NULL;

    for (int i = 0; i < lista->tamanho; i++) {
        if (atual->valor == valor) {
            encontrado = atual;
            break;
        }
        atual = atual->prox;
    }

    if (encontrado == NULL) {
        printf("Elemento não encontrado!\n");
        return;
    }

    No* anterior = encontrado->ant;
    No* proximo = encontrado->prox;

    anterior->prox = proximo;
    proximo->ant = anterior;

    if (encontrado == lista->inicio) {
        lista->inicio = proximo;
    }

    lista->tamanho--;
}

void imprimirLista(ListaCircular* lista) {
    if (lista->tamanho == 0) {
        printf("Lista vazia!\n");
        return;
    }

    printf("Ordem direta: ");
    No* atual = lista->inicio;
    for (int i = 0; i < lista->tamanho; i++) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");

    printf("Ordem reversa: ");
    atual = lista->inicio->ant;
    for (int i = 0; i < lista->tamanho; i++) {
        printf("%d ", atual->valor);
        atual = atual->ant;
    }
    printf("\n");
}

int contarElementos(ListaCircular* lista) {
    return lista->tamanho;
}

int main() {
    ListaCircular lista;
    inicializarLista(&lista);

    inserirOrdenado(&lista, 10);
    inserirOrdenado(&lista, 5);
    inserirOrdenado(&lista, 20);
    inserirOrdenado(&lista, 15);

    imprimirLista(&lista);
    printf("Numero de elementos: %d\n", contarElementos(&lista));

    removerElemento(&lista, 10);
    imprimirLista(&lista);
    printf("Numero de elementos: %d\n", contarElementos(&lista));

    return 0;
}