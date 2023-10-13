#include <stdio.h>

int main() {
    float tempoGasto;
    float velocidadeMedia;

    printf("Digite o valor do tempo gasto na viagem: [horas]\n");
    scanf("%f", &tempoGasto);
    printf("Digite o a velocidade média da viagem: \n");
    scanf("%f", &velocidadeMedia);

    float distancia = tempoGasto * velocidadeMedia;
    float litros = distancia/12;

    printf("A distancia foi de: %.2f e tanto de litros gastos foram: %.2f\n", distancia, litros);
    return 0;
}
