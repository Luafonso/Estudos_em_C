#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);

    int guardaVariavel = a;
    a = b;
    b = guardaVariavel;

    printf("Agora os valores de a eh: %d e o de b eh: %d\n", a, b);
    return 0;
}
