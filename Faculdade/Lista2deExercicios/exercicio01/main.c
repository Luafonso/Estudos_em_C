#include <stdio.h>

int main() {
    int numero;
    int divisao;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if(numero > 20){
        divisao = numero/2;
        printf("O resultado da divisao eh: %d\n", divisao);
    }
    else{
        printf("Não é maior que 20\n");
    }
    return 0;
}
