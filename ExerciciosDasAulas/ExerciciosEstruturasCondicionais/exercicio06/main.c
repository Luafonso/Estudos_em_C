#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num >= 0){
        printf("É possível calcular a raiz quadrada de %d\n", num);
    }
    else{
        printf("Não é possível calcular a raiz quadrada de %d\n", num);
    }
    return 0;
}
