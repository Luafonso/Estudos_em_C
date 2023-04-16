#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int maior;
	int intermediario;
	int menor;

	printf("Digite o valor do primeiro número: \n");
	scanf("%d", &num1);
	printf("Digite o valor do segundo número: \n");
	scanf("%d", &num2);
	printf("Digite o valor do terceiro número: \n");
	scanf("%d", &num3);
	
	if(num1 > num2 && num1 > num3){
		maior = num1;
		if(num2 > num3){
			intermediario = num2;
			menor = num3;
		}
		else{
			intermediario = num3;
			menor = num2;
		}
	}
	else if (num2 > num1 && num2 > num3){
		maior = num2;
		if(num1 > num3){
			intermediario = num1;
			menor = num3;
		}
		else{
			intermediario = num3;
			menor = num1;
		}
	}
	else{
		maior = num3; 
		if(num1 > num2){
			intermediario = num1;
			menor = num2;
		}
		else{
			intermediario = num2;
			menor = num1;
		}
	}
	printf("-----------------------------------------------------\n");
	printf("Em ordem crescente os 3 números ficam: %d - %d - %d\n", menor, intermediario, maior);
	return 0;
}

