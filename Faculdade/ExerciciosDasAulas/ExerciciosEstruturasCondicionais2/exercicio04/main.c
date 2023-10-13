#include <stdio.h>

int main() {
    int num1;
    int num2;
    char operador;
    int resultado = 0;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o operador: [+, =, /, *]\n");
    scanf(" %c", &operador);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        default:
            printf("Operador inválido\n");
    }
    printf("%d %c %d = %d\n", num1, operador, num2, resultado);
    return 0;
}
