#include <stdio.h>

//Desenvolva um algoritmo para calcular o Índice de Massa Corporal 
//(IMC) de uma pessoa e classificar seu estado nutricional.



int main (){
	
	float altura,peso,n;
	
	printf("||Calculador de IMC||");
	printf("Digite sua altura em metros. \n");
	scanf("%f", &altura);

	printf("Digite seu peso em kg. \n");
	scanf("%f", &peso);
	
	n=peso/(altura*altura);

	if (n>=40){
		
		printf("Seu IMC e igual a %f , obesidade Morbida. \n", n);
		
	}else{
		
		if(n<40, n>=35){
			
			printf("Seu IMC e igual a %f , obesidade Severa. \n", n);
			
		}else{
			
			if(n<35, n>=30){
				
				printf("Seu IMC e igual a %f , obesidade grau 1. \n", n);
				
			}else{
				
				if(n<30, n>=25){
					
					printf("Seu IMC e igual a %f , levemente acima do peso. \n", n);
					
					}else{
					
					if(n<25, n>=18.6){
						
						printf("Seu IMC e igual a %f , peso ideal. Parabens \n", n);
						
					}else{
						
						printf("Seu IMC e igual a %f , abaixo do peso. \n", n);
						
					}
					
			
					
				}
				
			}
			
		}
		
	}


	return 0;
}
