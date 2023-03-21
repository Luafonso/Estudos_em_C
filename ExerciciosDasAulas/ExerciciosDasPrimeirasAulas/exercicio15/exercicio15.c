#include <stdio.h>

int main() {
    int idade;
    float altura;
    char genero;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu genero: \n");
    scanf(" %c", &genero);

    printf("Sua idade eh %d, sua altura eh %f, e seu genero eh %c", idade, altura, genero);
    return 0;
}
