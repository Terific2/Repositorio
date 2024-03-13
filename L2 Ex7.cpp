#include <stdio.h>

//Converta uma nota num?rica (0 a 100) para um conceito (A, B, C, D, E, F), 
//seguindo um crit?rio pr?-definido.


int main (){
	
	int n;
	
	printf("||Calculador de conceitos||");
	printf("Digite uma nota entre 0 e 100. \n");
	scanf("%d", &n);

	if (n<=100, n>=90){
		
		printf("A nota %d corresponde a A.", n);
		
	}else{
		
		if(n<90, n>=80){
			
			printf("A nota %d corresponde a B.", n);
			
		}else{
			
			if(n<80, n>=70){
				
				printf("A nota %d corresponde a C", n);
				
			}else{
				
				if(n<70, n>=60){
					
					printf("A nota %d corresponde a D", n);
					
					}else{
					
					if(n<60, n>=50){
						
						printf("A nota %d corresponde a E", n);
						
					}else{
						
						if(n<50){
							
							printf("A nota %d corresponde a F", n);
							
						}else{
							
							printf("%d esta fora do intervalo especificado.", n);
							
						}
						
					}
					
			
					
				}
				
			}
			
		}
		
	}


	return 0;
}
