
#include <stdio.h>

int main()
{
	int idade; 
	float peso;
	float gotas;
	
	printf("Digite a idade do paciente: \n");
	scanf("%d", &idade);
	printf("Digite o peso do paciente: \n");
	scanf("%f", &peso);
	
	if(idade >= 12 && peso >= 60){
		gotas = (1000*20)/500;
		printf("************************************************\n");
		printf("Pela sua idade: %d anos\n", idade);
		printf("Pelo seu peso: %.2f kg\n", peso);
		printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
		printf("************************************************\n");
	}else if(idade >= 12 && peso < 60){
		gotas = (875*20)/500;
		printf("************************************************\n");
		printf("Pela sua idade: %d anos\n", idade);
		printf("Pelo seu peso: %.2f kg\n", peso);
		printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
		printf("************************************************\n");
	}else if(idade < 12){
		if(peso >= 5 && peso <= 9){
			gotas = (125*20)/500;
			printf("************************************************\n");
			printf("Pela sua idade: %d anos\n", idade);
			printf("Pelo seu peso: %.2f kg\n", peso);
			printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
			printf("************************************************\n");
		}else if (peso >= 9.1 && peso <= 16){
			gotas = (250*20)/500;
			printf("************************************************\n");
			printf("Pela sua idade: %d anos\n", idade);
			printf("Pelo seu peso: %.2f kg\n", peso);
			printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
			printf("************************************************\n");
		}else if (peso >= 16.1 && peso <= 24){
			gotas = (375*20)/500;
			printf("************************************************\n");
			printf("Pela sua idade: %d anos\n", idade);
			printf("Pelo seu peso: %.2f kg\n", peso);
			printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
			printf("************************************************\n");
		}else if (peso >= 24.1 && peso <= 30){
			gotas = (500*20)/500;
			printf("************************************************\n");
			printf("Pela sua idade: %d anos\n", idade);
			printf("Pelo seu peso: %.2f kg\n", peso);
			printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
			printf("************************************************\n");
		}else if(peso > 30){
			gotas = (750*20)/500;
			printf("************************************************\n");
			printf("Pela sua idade: %d anos\n", idade);
			printf("Pelo seu peso: %.2f kg\n", peso);
			printf("A quantidade de gotas que irá tomar é: %.2f\n", gotas);
			printf("************************************************\n");
		}
	}
	return 0;
}

