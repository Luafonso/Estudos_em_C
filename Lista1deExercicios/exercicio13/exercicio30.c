#include <stdio.h>

int main() {
    float segundos;

    printf("Digite os segundos: \n");
    scanf("%f", &segundos);

    float minutos = segundos/60;
    float horas = minutos/60;

    printf("Horas: %.2f, Minutos: %.2f, Segundos: %.2f", horas, minutos, segundos);
    return 0;
}
