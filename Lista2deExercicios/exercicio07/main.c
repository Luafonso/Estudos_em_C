#include <stdio.h>

int main()
{
	int numero1;
	int numero2;
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &numero1);
	printf("Digite o segundo número: \n");
	scanf("%d", &numero2);
	
	if(numero1 == numero2){
		printf("São iguais\n");
	}
	else{
		printf("São diferentes\n");
	}
	return 0;
}

