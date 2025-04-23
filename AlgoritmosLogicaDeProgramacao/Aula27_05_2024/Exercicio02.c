#include <stdio.h>

void imprimeMes(int *mes) {
    switch (*mes) {
        case 1: 
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        default:
            printf("Dezembro");
            break;
    }
}

int main() {
    int num;

    do {
        printf("Digite um numero correspondente a um mes: ");
        scanf("%d", &num);
    } while (num < 1 || num > 12);
    
    imprimeMes(&num);

    return 0;
}