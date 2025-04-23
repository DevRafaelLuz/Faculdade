#include <stdio.h>

void coverterTemp(float temperatura) {
    float fahrenheit = (temperatura * 1.8) + 32;
    printf("%.1f graus fahrenheit", fahrenheit);
}

int main() {
    float temperatura;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &temperatura);

    coverterTemp(temperatura);

    return 0;
}