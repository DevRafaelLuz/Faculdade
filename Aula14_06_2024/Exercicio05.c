#include <stdio.h>
#include <string.h>

struct estacionamento {
    char placa[8], horario[5];
};

int main() {
    struct estacionamento e[10];
    int opcao, vagas = 10;

    printf("# Estacionamento #\n");    

    do {
        printf("[ 1 ] Entrada de veiculo\n[ 2 ] Saida de veiculo\n[ 3 ] Listagem de veiculos\n[ 4 ] Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (vagas > 0) {
                    for (int i = 0; i < 10; i++) {
                        if (strlen(e[i].placa) == 0) {
                            fflush(stdin);
                            printf("Informe a placa do veiculo: ");
                            scanf("%[^\n]s", e[i].placa);
                            fflush(stdin);
                            printf("Informe o horario de entrada: ");
                            scanf("%[^\n]s", e[i].horario);
                            printf("Veiculo cadastrado com sucesso!\n");
                            vagas--;
                            printf("Vagas disponiveis: %d\n", vagas);    
                            break;                        
                        }   
                    }                    
                } else {
                    printf("Estacionamento lotado!");
                }
                
                break;
            case 2:

                break;
            case 3:
                printf("\nNr. vaga      Placa       Entrada\n");
                printf("-----------------------------------\n");

                if (vagas < 10) {
                    int vagasOcupadas = 10 - vagas;

                    for (int i = 0; i < vagasOcupadas; i++) {
                        printf("%d      %s      %s\n", i + 1, e[i].placa, e[i].horario);
                    }
                }
                
                printf("-----------------------------------\n");
                printf("Vagas disponiveis: %d\n", vagas);

                break;
            case 4:
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}