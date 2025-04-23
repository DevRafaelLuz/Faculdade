#include <stdio.h>

void calcularPrecoProdutos(float *totalProdutos) {
    float despesa, desconto;
    
    desconto = (*totalProdutos * 10.0) / 100;
    despesa = *totalProdutos - desconto;

    printf("Total: %.2f", despesa);
}

void calcularPrecoAmbos(float *totalGeral) {
    float despesa, desconto;
    
    desconto = (*totalGeral * 15.0) / 100;
    despesa = *totalGeral - desconto;

    printf("Total: %.2f", despesa);
}

int main() {
    int produtoA = 0, produtoB = 0, opcao;
    float totalProdutosA, totalProdutosB, totalGeral;

    do {
        printf("[ 1 ] + Produto A\n[ 2 ] + Produto B\n[ 3 ]Finalizar\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                produtoA++;
                break;
            case 2:
                produtoB++;
                break;
            default:
                break;
        }
    } while (opcao != 3);

    totalProdutosA = produtoA * 10.0;
    totalProdutosB = produtoB * 20.0;
    totalGeral = totalProdutosA + totalProdutosB;

    if (produtoA > 0 && produtoB > 0) {
        calcularPrecoAmbos(&totalGeral);
    } else if (produtoA > 0) {
        calcularPrecoProdutos(&totalProdutosA);
    } else {
        calcularPrecoProdutos(&totalProdutosB);
    }

    return 0;
}