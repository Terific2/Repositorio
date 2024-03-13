#include <stdio.h>

//Calcule o bônus a ser recebido por um funcionário com base em seu 
//tempo de serviço na empresa, considerando diferentes faixas de tempo 
//com bônus variáveis.

int main(){
	
	float anos, salario, bonus, salario1;
	printf("||CALCULADOR DE BONUS||");
	printf("Entre com o seu tempo de serviço na empresa. \n");
	scanf("%f", &anos);
	
	printf("Agora digite seu salario em R$. \n");
	scanf("%f", &salario);
	
	if (anos<=5){
		
		bonus=salario*0.1;
		salario1=salario+bonus;
		printf("Seu bonus e de %f R$, e portanto voce recebera %f R$. \n", bonus, salario1);
		
	}else{
		
		if(anos>5, anos<=10){
			
		bonus=salario*0.15;
		salario1=salario+bonus;
		printf("Seu bonus e de %f R$, e portanto voce recebera %f R$. \n", bonus, salario1);
		
			
		}else{
			
		bonus=salario*0.2;
		salario1=salario+bonus;
		printf("Seu bonus e de %f R$, e portanto voce recebera %f R$. \n", bonus, salario1);
		
			
		}
		
	}
	
	return 0;
}
