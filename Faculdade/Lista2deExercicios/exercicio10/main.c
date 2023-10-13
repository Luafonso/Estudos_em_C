#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int maior;
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &num1);
	printf("Digite o segundo número: \n");
	scanf("%d", &num2);
	printf("Digite o terceiro número: \n");
	scanf("%d", &num3);
	
	maior = num1;
	printf("-------------------------\n");
	
	if(num2 > maior){
		maior = num2;
	}
	else if(num3 > maior){
		maior = num3;
	}
	
	printf("%d é o maior número\n", maior);
	return 0;
}

