#include <stdio.h>

int main() {
    float altura;
    float raio;
    float pi = 3.14;

    printf("Digite a altura da lata: \n");
    scanf("%f", &altura);
    printf("Digite o raio da lata: \n");
    scanf("%f", &raio);

    float volume = pi * (raio * raio) * altura;
    printf("O volume eh: %.2f", volume);
    return 0;
}
