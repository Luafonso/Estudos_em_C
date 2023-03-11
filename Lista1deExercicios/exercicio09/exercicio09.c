#include <stdio.h>

int main() {
    float saldo;
    printf("Digite seu saldo: \n");
    scanf("%f", &saldo);

    float novoSaldo = saldo * 1.035;
    printf("O novo saldo com rendimento de 3.5%% eh: %.2f\n", novoSaldo);
    return 0;
}
