#include <stdio.h>

int main() {
    float valorGasto;

    printf("Digite o valor gasto pelo cliente: \n");
    scanf("%f", &valorGasto);

    float gorjeta = valorGasto*0.1;
    float valorTotal = valorGasto + gorjeta;

    printf("O valor inicial foi: R$%.2f\n", valorGasto);
    printf("O valor da gorjeta eh: R$%.2f\n", gorjeta);
    printf("O valor total a pagar: R$%.2f\n", valorTotal);
    return 0;
}
