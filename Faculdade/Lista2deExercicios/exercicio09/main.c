#include <stdio.h>

int main()
{
	int num1;
	int num2;
	
	printf("Digite o valor do primeiro número: \n");
	scanf("%d", &num1);
	printf("Digite o valor do segundo número: \n");
	scanf("%d", &num2);
	printf("---------------------------------\n");
	if(num1 > num2){
		printf("%d -- %d\n", num1, num2);	
	}
	else{
		printf("%d -- %d\n", num2, num1);
	}
	return 0;
}

