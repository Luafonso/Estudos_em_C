#include <stdio.h>

int main() {
    int num1;
    int num2;
    int soma;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    if(soma > 10){
        printf("A soma de %d + %d = %d\n", num1, num2, soma);
    }
    return 0;
}
