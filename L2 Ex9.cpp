#include <stdio.h>

//Converta uma nota numérica (0 a 100) para um conceito (A, B, C, D, E, F), 
//seguindo um critério pré-definido.


int main (){
	
	int idade;
	
	printf("||DETERMINADO DE FAIXA ETARIA||");
	printf("Digite uma idade. \n");
	scanf("%d", &idade);

	if (idade>60){
		
		printf("%d corresponde a idoso.", idade);
		
	}else{
		
		if(idade<=60, idade>=19){
			
			printf("%d corresponde a adulto.", idade);
			
		}else{
			
			if(idade<=18, idade>=13){
				
				printf("%d corresponde a adolescente.", idade);
				
			}else{
				
				if(idade<=12, idade>=1){
					
					printf("%d corresponde a crianca.", idade);
					
					}else{
					
					printf("Idade invalida.");
						
					}
					
			
					
				}
				
			}
			
		}
	return 0;		
	}

