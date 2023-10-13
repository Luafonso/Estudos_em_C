#include <stdio.h>

int main() {
    float raio;
    float pi = 3.14;
    printf("Digite o raio de um circulo: \n");
    scanf("%f", &raio);

    float perimetro = 2 * pi * raio;
    float area = pi * (raio * raio);

    printf("O perimetro do circulo eh: %.2f, e a area eh: %.2f\n", perimetro, area);


    return 0;
}
