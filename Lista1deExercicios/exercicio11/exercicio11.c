#include <stdio.h>

int main() {
    float salarioMin;
    float quiloWatts;
    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &salarioMin);
    printf("Digite a quantidade de quilowatts: \n");
    scanf("%f", &quiloWatts);

    float valorQuiloWatts = (salarioMin / 7) / 100;
    float valorPagar = valorQuiloWatts * quiloWatts;
    float valorPagarDesconto = valorPagar * 0.9;

    printf("O valor em reais do quilowatt eh: %.2f\n", valorQuiloWatts);
    printf("O total a pagar em reais eh: %.2f\n", valorPagar);
    printf("O total a pagar com desconto de 10%% eh: %.2f\n", valorPagarDesconto);
    return 0;
}
