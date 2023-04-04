#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if(numero > 0){
        printf("%d é positivo\n", numero);
    }
    else if(numero < 0){
        printf("%d é negativo\n", numero);
    }
    else{
        printf("%d é nulo\n", numero);
    }
    return 0;
}
