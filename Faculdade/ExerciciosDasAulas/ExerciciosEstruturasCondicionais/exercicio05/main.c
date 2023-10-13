#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("%d é par\n", num);
    }
    else{
        printf("%d é impar\n", num);
    }
    return 0;
}
