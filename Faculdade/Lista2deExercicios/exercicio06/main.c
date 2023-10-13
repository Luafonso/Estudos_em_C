
#include <stdio.h>

int main()
{
	int numero;
	printf("Digite um número: \n");
	scanf("%d", &numero);
	
	if(numero == 20){
		printf("%d é igual a 20\n", numero);
	}
	else if(numero > 20){
		printf("%d é maior que 20\n", numero);
	}
	else{
		printf("%d é menor que 20\n", numero);
	}
	return 0;
}

