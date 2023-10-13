#include <stdio.h>

int main() {
    float salarioBruto;
    float prestacao;
    float trintaPorcento;

    printf("Digite o valor do salário bruto: \n");
    scanf("%f", &salarioBruto);
    printf("Digite o valor da prestação: \n");
    scanf("%f", &prestacao);

    trintaPorcento = salarioBruto * 0.3;

    if(prestacao > trintaPorcento){
        printf("Não é possível fazer o empréstimo\n");
    }
    else{
        printf("É possível fazer o empréstimo\n");
    }
    return 0;
}
