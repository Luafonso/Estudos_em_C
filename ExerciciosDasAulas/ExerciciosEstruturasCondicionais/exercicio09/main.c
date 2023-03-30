#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    if(num%3 == 0 && num%7 == 0){
        printf("%d é divisivel por 3 e 7\n", num);
    }
    else{
        printf("%d não é divisivel por 3 e 7\n", num);
    }
    return 0;
}
