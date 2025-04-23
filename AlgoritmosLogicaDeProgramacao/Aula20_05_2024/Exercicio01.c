#include <stdio.h>

float pesoIdeal(float altura, char sexo) {
    float peso;

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido!");
    }

    return peso;
}

int main() {
    float altura, peso;
    char sexo;

    do {
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso atual: ");
        scanf("%f", &peso);
    } while (altura <= 0.0 || peso <= 0.0);

    printf("Digite o seu sexo: ");
    scanf(" %c", &sexo);  

    if (sexo == 'M' || sexo == 'm' || sexo =='F' || sexo == 'f') {
        if (pesoIdeal(altura, sexo) < peso) {
            printf("Voce esta acima do peso ideal");
        } else {
            printf("Voce esta abaixo do peso ideal");
        }
    } else {
        printf("Sexo invalido!");
    }    

    return 0;
}