#include <stdio.h>

int main()
{
	int atleta1;
	int atleta2;
	int atleta3;
	int maior;
	int intermediario;
	int menor;
	float soma;
	float media;
	
	printf("Digite a pontuação do primeiro atleta: \n");
	scanf("%d", &atleta1);
	printf("Digite a pontuação do segunda atleta: \n");
	scanf("%d", &atleta2);
	printf("Digite a pontuação do terceira atleta: \n");
	scanf("%d", &atleta3);
	
	if(atleta1 > atleta2 && atleta1 > atleta3){
		maior = atleta1;
		if(atleta2 > atleta3){
			intermediario = atleta2;
			menor = atleta3;
		}
		else{
			intermediario = atleta3;
			menor = atleta2;
		}
	}
	else if (atleta2 > atleta1 && atleta2 > atleta3){
		maior = atleta2;
		if(atleta1 > atleta3){
			intermediario = atleta1;
			menor = atleta3;
		}
		else{
			intermediario = atleta3;
			menor = atleta1;
		}
	}
	else{
		maior = atleta3; 
		if(atleta1 > atleta2){
			intermediario = atleta1;
			menor = atleta2;
		}
		else{
			intermediario = atleta2;
			menor = atleta1;
		}
	}
	printf("-----------------------------------------------------\n");
	printf("A pontuação em ordem crescente fica: %d - %d - %d\n", menor, intermediario, maior);
	
	soma = atleta1 + atleta2 + atleta3;
	
	if(soma > 100){
		media = (atleta1 + atleta2 + atleta3)/3;
		printf("-------------------------------------------------\n");
		printf("A média da pontuação é: %.2f", media);
	}
	else{
		printf("-------------------------------------------------\n");
		printf("Desclassificada\n");
		
	}
	return 0;
}

