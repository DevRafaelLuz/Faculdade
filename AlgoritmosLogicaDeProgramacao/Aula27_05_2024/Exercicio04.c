#include <stdio.h>

float calcularSubtotalCompra(float *valor) {
    return 1 * *valor;
}

int main() {
    float preco = 24.90, subtotal, totalCompra = 0.0;
    int opcao, counter = 0;

    do {
        printf("[ 1 ] + Adicionar Lanche a Compra\n[ 2 ] Finalizar Compra\n ");
        scanf("%d", &opcao);        

        switch (opcao) {
            case 1:
                counter++;
                subtotal = calcularSubtotalCompra(&preco);
                fflush(stdin);
                totalCompra += subtotal; 
                printf("--------------------------\n");
                printf("Subtotal: %.2f\n", totalCompra);
                printf("--------------------------\n");                
                break;
            case 2:
                if (counter == 0) {
                    printf("Total da compra: %.2f\n", totalCompra);
                }
                break;
            default:
                printf("\nOpcao invalida!");
                break;
        }
    } while (opcao != 2);

    fflush(stdin);
    printf("--------------------------\n");
    printf("Total da compra: %.2f", totalCompra);
    
    return 0;
}