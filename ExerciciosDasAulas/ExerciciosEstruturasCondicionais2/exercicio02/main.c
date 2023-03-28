#include <stdio.h>

int main() {
    int idade;
    float valor;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    valor = idade >= 18 ? 15.0 : 10.0;
    printf("Com a sua idade %d voce ira pagar R$%.2f no ingresso\n", idade, valor);
    return 0;
}
