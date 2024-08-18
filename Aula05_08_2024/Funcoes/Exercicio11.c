/* Faça uma função que receba três notas de um aluno e uma letra como parâmetros. Se a letra for A, a função deve 
    calcular e retornar a média aritmética das notas do aluno (p1+p2+p3)/3, e, se for P deve calcular e retornar à 
    média ponderada com pesos 1, 2 e 3 ((1.p1+2.p2+3.p3)/(1+2+3)); */

#include <stdio.h>
#include <string.h>

float calcularMedias(float nota1, float nota2, float nota3, char letra[]) {
    if (strcmp(letra, "A") == 0) {
        return (nota1 + nota2 + nota3) / 3;
    } else {
        return ((1 * nota1 + 2 * nota2 + 3 * nota3) / (1 + 2 + 3));
    }
}

int main() {
    float nota1, nota2, nota3;
    char letra[1];

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);
    printf("Informe a nota 3: ");
    scanf("%f", &nota3);
    fflush(stdin);
    printf("Informe a letra do calculo: [A] Media aritmetica [P] Media ponderada: ");
    gets(letra);
    
    if (strcmp(letra, "A") == 0) {
        printf("Media aritmetica: %.1f", calcularMedias(nota1, nota2, nota3, letra));
    } else if (strcmp(letra, "P") == 0) {
        printf("Media ponderada: %.1f", calcularMedias(nota1, nota2, nota3, letra));
    } else {
        printf("Nota ou letra invalidos!");
    }

    return 0;
}