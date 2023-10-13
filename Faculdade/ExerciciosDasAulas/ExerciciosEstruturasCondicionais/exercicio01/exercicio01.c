#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    if(numero > 0){
        printf("%d é positivo", numero);
    }
    else if(numero == 0){
        printf("%d é nulo", numero);
    }
    else{
        printf("%d é negativo", numero);
    }
    return 0;
}
