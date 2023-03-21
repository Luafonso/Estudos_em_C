#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &n3);
    printf("Digite o quarto numero: \n");
    scanf("%d", &n4);
    int soma = n1 + n2 + n3 + n4;
    float media = soma/4;

    printf("A media eh: %f\n", media);
}
