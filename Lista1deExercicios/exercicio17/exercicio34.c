#include <stdio.h>

int main() {
    float valor;
    float taxa;
    float tempo;

    printf("Digite o valor da conta: \n");
    scanf("%f", &valor);
    printf("Digite a taxa a ser incluida: \n");
    scanf("%f", &taxa);
    printf("Digite o tempo em que a pessoa deve esta conta: [mes]\n");
    scanf("%f", &tempo);

    float prestacao = valor + (valor * (taxa/100) * tempo);
    printf("O valor da nova prestacao eh: R$%.2f\n", prestacao);


    return 0;
}
