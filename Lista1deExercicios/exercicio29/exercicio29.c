#include <stdio.h>

int main() {
    float valorProduto;
    float descontoProduto;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valorProduto);
    printf("Digite a porcentagem de desconto: \n");
    scanf("%f", &descontoProduto);

    float desconto = (valorProduto * descontoProduto) / 100;
    float valorDesconto = valorProduto - desconto;

    printf("O valor com o desconto eh: %.2f", valorDesconto);
    return 0;
}
