#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite o dia: \n");
    scanf("%d", &dia);
    printf("Digite o mes: \n");
    scanf("%d", &mes);
    printf("Digite o ano: \n");
    scanf("%d", &ano);

    printf("A data eh %d/%d/%d\n", dia, mes, ano);
    return 0;
}
