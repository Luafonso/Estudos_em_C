#include <stdio.h>

int main() {
    int numero;
    int operacao;

    printf("Digite um número: [Entre 100 a 999]\n");
    scanf("%d", &numero);
    operacao = numero/100;

    if(operacao%2 == 0){
        printf("A centena de %d é par\n", numero);
    }
    else{
        printf("A centena de %d não é par\n", numero);
    }
    return 0;
}
