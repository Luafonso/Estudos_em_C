#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	float b;
	float c;
	float delta;
	float raiz1;
	float raiz2;
	
	printf("Digite o valor de a: \n");
	scanf("%f", &a);
	printf("Digite o valor de b: \n");
	scanf("%f", &b);
	printf("Digite o valor de c: \n");
	scanf("%f", &c);
	
	printf("--------------------\n");
	
	if(a==0){
		printf("Não é equação de segundo grau\n");
	}
	else{
		delta = (b*b)-4*a*c;
		printf("%.2f\n", delta);
		if(delta < 0){
			printf("Não existem raízes reais\n");
		}
		else{
			raiz1 = (-b+sqrt(delta))/(2*a);
			raiz2 = (-b-sqrt(delta))/(2*a);
			printf("--------------------\n");
			printf("O valor raiz1 = %.2f\n", raiz1);
			printf("O valor raiz2 = %.2f\n", raiz2);
		}
	}
	return 0;
}

