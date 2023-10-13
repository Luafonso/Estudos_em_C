#include <stdio.h>

int main() {
    int num1;
    int num2;
    int soma;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    if(soma > 20){
        soma = soma + 8;
    }
    else{
        soma = soma -5;
    }

    printf("O resultado é %d\n", soma);
    return 0;
}
