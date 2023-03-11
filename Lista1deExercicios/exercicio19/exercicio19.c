#include <stdio.h>

int main() {
    float numerador;
    float denominador;

    printf("Digite o numerador da fração: \n");
    scanf("%f", &numerador);
    printf("Digite o denominador da fração: \n");
    scanf("%f", &denominador);

    printf("A o resultado da divisão desta fração eh: %f", numerador/denominador);
    return 0;
}
