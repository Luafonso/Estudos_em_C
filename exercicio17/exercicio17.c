#include <stdio.h>

int main() {
    int temperatura;
    printf("Digite a temperatura em Fahrenheit:  \n");
    scanf("%d", &temperatura);

    double conversao = (temperatura-32) * 5/9;
    printf("%d em Fahrenheit eh %f em celsius\n", temperatura, conversao);
    return 0;
}
