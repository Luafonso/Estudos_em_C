#include <stdio.h>

int main() {
    float n1;
    float n2;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);

    float media = (n1+n2)/2;
    printf("A media eh: %.2f\n", media);
    return 0;
}
