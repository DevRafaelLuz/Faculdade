/* Crie uma estrutura chamada "Viagem" que represente as informações de uma viagem: destino (string), duração em dias 
    (int) e custo total (float). Declare um array de 4 elementos do tipo "Viagem" e preencha o array com dados de 4 viagens 
    diferentes. Em seguida, implemente uma função chamada "viagemMaisBarata" que recebe o array de viagens como parâmetro e 
    retorna o destino da viagem com menor custo total; */

#include <stdio.h>

typedef struct {
    char destino[100];
    int dias;
    float custo;
} Viagem;

void viagemMaisBarata(Viagem v[]) {
    float maisBarato = v[0].custo;
    int i;

    for (i = 1; i < 4; i++) {
        if (v[i].custo < maisBarato) {
            maisBarato = v[i].custo;
        }
    }

    for (i = 0; i < 4; i++) {
        if (v[i].custo == maisBarato) {
            printf("> Destino da viagem mais barata: %s", v[i].destino);
            break;
        }
    }   
}

int main() {
    Viagem v[4];

    for (int i = 0; i < 4; i++) {
        printf("=== VIAGEM %d ===\n", i + 1);
        fflush(stdin);
        printf("Informe o destino: ");
        scanf("%[^\n]s", v[i].destino);
        printf("Informe a duracao em dias: ");
        scanf("%d", &v[i].dias);
        printf("Informe o custo total da viagem: ");
        scanf("%f", &v[i].custo);
    }

    viagemMaisBarata(v);
    
    return 0;
}
