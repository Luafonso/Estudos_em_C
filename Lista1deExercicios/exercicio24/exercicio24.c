#include <stdio.h>

int main() {
    float num;
    printf("Digite um numero real: \n");
    scanf("%f", &num);

    float tp = num/3;
    printf("A terça parte de %.2f eh: %.2f\n", num, tp);
    return 0;
}
