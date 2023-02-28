#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    printf("O valor de %d + %d = %d\n", n1, n2, n1 + n2);
    printf("O valor de %d - %d = %d\n", n1, n2, n1 - n2);
    printf("O valor de %d * %d = %d\n", n1, n2, n1 * n2);
    printf("O valor de %d / %d = %d\n", n1, n2, n1 / n2);
    return 0;
}
