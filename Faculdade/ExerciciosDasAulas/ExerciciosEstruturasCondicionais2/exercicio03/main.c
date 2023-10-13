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

    if(operador == '+'){
        resultado = num1 + num2;
    }
    else if(operador == '-'){
        resultado = num1 - num2;
    }
    else if(operador == '/'){
        resultado = num1 / num2;
    }
    else if(operador == '*'){
        resultado = num1 * num2;
    }
    else{
        printf("Operador inválido");
    }

    printf("%d %c %d = %d", num1, operador, num2, resultado);
    return 0;
}
