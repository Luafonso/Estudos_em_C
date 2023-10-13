#include <stdio.h>

int main() {
    int anoNascimento, anoPrensente;

    printf("Digite o ano em que voce nasceu: \n");
    scanf("%d", &anoNascimento);
    printf("Digite o ano em que estamos: \n");
    scanf("%d", &anoPrensente);

    int idade = anoPrensente - anoNascimento;

    printf("Sua idade eh: %d\n", idade);
    return 0;
}
