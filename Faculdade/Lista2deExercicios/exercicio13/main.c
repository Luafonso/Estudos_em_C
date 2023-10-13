#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int maior;
	int menor;
	
	printf("Digite o valor do primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o valor do segundo número: ");
	scanf("%d", &num2);
	printf("Digite o valor do terceiro número: ");
	scanf("%d", &num3);
	printf("Digite o valor do quarto número: ");
	scanf("%d", &num4);
	printf("Digite o valor do quinto número: ");
	scanf("%d", &num5);
	
	maior = num1;
	menor = num1;
	
	if(num2 > maior){
		maior = num2;
	}
	if(num3 > maior){
		maior = num3;
	}
	if(num4 > maior){
		maior = num4;
	}
	if(num5 > maior){
		maior = num5;
	}
	
	if(num2 < menor){
		menor = num2;
	}
	if(num3 < menor){
		menor = num3;
	}
	if(num4 < menor){
		menor = num4;
	}
	if(num5 < menor){
		menor = num5;
	}
	
	printf("--------------------------------\n");
	printf("O maior número é: %d\n", maior);
	printf("O menor número é: %d\n", menor);
	
	return 0;
}

