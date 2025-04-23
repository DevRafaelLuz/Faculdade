#include <stdio.h>

struct funcionario {
    char nome[50], cargo[30];
    int idade, experiencia;
    float salario;
};

int main() {
    float media, soma = 0.0, maiorSalario;
    int  maiorExperiencia, qtda = 3;
    struct funcionario func[5];

    for (int i = 0; i < qtda; i++) {
        printf("--- Cadastrar Novo Funcionario ---\n");
        fflush(stdin);
        printf("Digite o nome do funcionario: ");
        scanf("%s", &func[i].nome);
        fflush(stdin);
        printf("Digite a idade do funcionario: ");
        scanf("%d", &func[i].idade);
        fflush(stdin);
        printf("Digite o salario do funcionario: ");
        scanf("%f", &func[i].salario);
        fflush(stdin);
        printf("Quantos anos de experiencia possui o funcionario: ");
        scanf("%d", &func[i].experiencia);
        fflush(stdin);
        printf("Digite o cargo do funcionario: ");        
        scanf("%s", &func[i].cargo);

        soma += func[i].idade;
    }

    media = soma / qtda;
    printf("Media da idade dos funcionarios: %.1f\n", media);

    maiorExperiencia = func[0].experiencia;
    maiorSalario = func[0].salario;

    for (int i = 1; i < qtda; i++) {
        if (func[i].experiencia > maiorExperiencia) {
            maiorExperiencia = func[i].experiencia;
        }

        if (func[i].salario > maiorSalario) {
            maiorSalario = func[i].salario;
        }
    }

    for (int j = 0; j < qtda; j++) {
        if (func[j].experiencia == maiorExperiencia) {
            printf("%s\n", func[j].nome);
        }

        if (func[j].salario == maiorSalario) {
            printf("\n%s", func[j].cargo);
        }
    }

    return 0;
}