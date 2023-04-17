#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	
	printf("Digite o valor do lado a: \n");
	scanf("%d", &a);
	printf("Digite o valor do lado b: \n");
	scanf("%d", &b);
	printf("Digite o valor do lado c: \n");
	scanf("%d", &c);
	
	if(a <(b+c) && b < (a+c) && c < (a+b)){
		printf("Eles podem representar os lados de um triângulo\n");
	}
	else{
		printf("Não podem representar os lados de um triângulo\n");
	}
	return 0;
}

