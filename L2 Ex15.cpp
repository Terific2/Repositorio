#include <stdio.h>

int main(){
	
	float numero;
	printf("Digite um numero. \n");
	scanf("%f", &numero);
	
	if(numero==0){
		
		printf("%.3f e igual a zero.\n", numero);
		
	}else{
		
		if(numero>0){
			
			printf("%.3f e positivo. \n", numero);
			
		}else{
			
			printf("%.3f e negativo. \n", numero);
			
		}
	}
	
	return 0;
}
