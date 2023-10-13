#include <stdio.h>

int main() {
    int idade;
    float valor;
    printf("Qual sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18){
        valor = 15.0;
    }
    else{
        valor = 10.0;
    }

    printf("Com sua idade que eh %d o valor a pagar eh R$%.2f\n", idade, valor);
    return 0;
}
