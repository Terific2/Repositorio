#include <stdio.h>

//Dada a potência ativa (P, em watts) e a potência aparente (S, em VA), 
//calcule o fator de potência do circuito e determine se é indutivo 
//ou capacitivo.

int main (){
	
	float p, s, fp, req2;
	
	printf("||Calculador de Fator de Potencia||");
	printf("Digite o valor da potencia ativa. \n");
	scanf("%f", &p);
	
	printf("Digite o valor da potencia aparente. \n");
	scanf("%f", &s);

	fp=(p)/(s);
	
	printf("O fator de potencia e igual a %f . \n", fp);
	
	if (fp>1){
		
		printf("O circuito e predominantemente capacitivo. \n");
		
	}else{
		if(fp=1){
			
			printf("O circuito e puramente resistivo. \n");
			
		}else{
			
			printf("O circuito e predominantemente capacitivo. \n");
			
		}
	}

	return 0;
}
