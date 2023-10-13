#include <stdio.h>

int main() {
    int mes;
    printf("Digite o mes em numero: [janeiro = 1]\n");
    scanf("%d", &mes);

    if(mes <= 0 || mes > 12){
        printf("Insira um mês válido");
    }
    else{
       if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
           printf("mês %d tem 31 dias", mes);
       }
       else if(mes == 2){
           printf("mês %d tem 28 dias", mes);
       }
       else{
           printf("mês %d tem 30 dias", mes);
       }
    }
    return 0;
}
