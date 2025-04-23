#include <stdio.h>

struct usuario {
    int numero;
    char login[20];
    float espacoDisco;
};


int main() {
    int i;
    float media, total = 0;
    struct usuario u[6];

    for (i = 0; i < 6; i++) {
        printf("Digite o numero do registro: ");
        scanf("%d", &u[i].numero);
        fflush(stdin);
        printf("Digite o nome do usuario: ");
        scanf("%[^\n]s", u[i].login);
        printf("Digite o espaco em disco usado pelo usuario: ");
        scanf("%f", &u[i].espacoDisco);

        total += u[i].espacoDisco; 
    }

    media = total / 6;

    printf("\nNr.    Usuario    Espaco utilizado    %% de uso\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < 6; i++) {        
        printf("%d    %s      %.2fMB        %.2f\n", u[i].numero, u[i].login, u[i].espacoDisco, (u[i].espacoDisco / total) * 100);       
    }

    printf("Espaco total ocupado: %.2fMB\nEspaco medio ocupado: %.2fMB", total, media);

    return 0;
}