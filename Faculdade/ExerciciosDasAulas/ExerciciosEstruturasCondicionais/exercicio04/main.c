#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num > 0 && num < 100){
        printf("%d é válido", num);
    }
    else{
        printf("%d não é válido", num);
    }
    return 0;
}
