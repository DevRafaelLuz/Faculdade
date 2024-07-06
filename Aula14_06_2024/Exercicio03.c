#include <stdio.h>

struct veiculos {
    char modelo[20], placa[7];
    int anoFabricacao, numRENAVAN;
    float valorVeiculo, valorIPVA;
};


int main() {
    int qtdaVeiculos, tipoCombustivel, anosFabricacao = 0;
    float ipva;

    printf("Quantos veiculos serao registrados? ");
    scanf("%d", &qtdaVeiculos);

    struct veiculos v[qtdaVeiculos];

    for (int i = 0; i < qtdaVeiculos; i++) {
        printf("---- Veiculo %d ----\n", i + 1);
        fflush(stdin);
        printf("Digite o modelo do veiculo: ");
        scanf("%[^\n]s", v[i].modelo);
        printf("Informe o ano de fabricacao: ");
        scanf("%d", &v[i].anoFabricacao);
        printf("Digite o valor do veiculo: ");
        scanf("%f", &v[i].valorVeiculo);
        fflush(stdin);
        printf("Digite a placa do veiculo: ");
        scanf("%[^\n]s", v[i].placa);
        printf("Informe o numero do RENAVAM: ");
        scanf("%d", &v[i].numRENAVAN);

        anosFabricacao += 2024 - v[i].anoFabricacao;

        if (anosFabricacao > 20) {
            v[i].valorIPVA = 0.0;
        } else {
            printf("Qual eh o tipo de combustivel?\n[1]GAS [2]FLEX [3]GASOLINA ");
            scanf("%d", &tipoCombustivel);

            switch (tipoCombustivel) {
                case 1:
                    ipva = (v[i].valorVeiculo * 0.01) / 100.0;
                    v[i].valorIPVA = ipva;
                    break;
                case 2:
                    ipva = (v[i].valorVeiculo * 0.02) / 100.0;
                    v[i].valorIPVA = ipva;
                    break;
                case 3:
                    ipva = (v[i].valorVeiculo * 0.04) / 100.0;
                    v[i].valorIPVA = ipva;
                    break;
                default:
                    printf("Tipo de combustivel invalido!");
                    break;
            }
        }
    }    

    for (int j = 0; j < qtdaVeiculos; j++) {
        printf("---- Registro do Veiculo %d ----\n", j + 1);
        printf("Modelo: %s\n", v[j].modelo);
        printf("Placa: %s\n", v[j].placa);
        printf("RENAVAM: %d\n", v[j].numRENAVAN);
        printf("Valor do IPVA: %.2f\n", v[j].valorIPVA);
    }

    return 0;
}