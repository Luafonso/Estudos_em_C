#include <stdio.h>

int main() {
    int n1;
    int n2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    int soma = n1 + n2;
    printf("A soma eh: %d", soma);
    return 0;
}
