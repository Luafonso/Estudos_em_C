#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: [Entre 100 a 999]\n");
    scanf("%d", &numero);

    if((numero >= 200 && numero < 300) ||(numero >= 400 && numero < 500) || (numero >= 600 && numero < 700) || (numero >= 800 && numero < 900)){
        printf("A centena de %d é par\n", numero);
    }
    else{
        printf("A centena de %d não é par\n", numero);
    }
    return 0;
}
