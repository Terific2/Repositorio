#include <stdio.h>
#include <math.h>

//Implemente um algoritmo para calcular o montante final de um investimento aplicado a juros compostos.

int main (){
	
	float c, tax, tempo, tax1, mont;
	printf("||CALCULADOR DE JUROS COMPOSTO||");
	printf("Digite o valor de capital investido. \n");
	scanf("%f",&c);
	
	printf("Digite o valor da taxa (em %). \n");
	scanf("%f",&tax1);
	tax=tax1/100;
	
	printf("Agora digite o tempo de investimento (em anos). \n");
	scanf("%f",&tempo);	
	
	mont=pow((c*(1+tax)),tempo);

	printf("Seu montante final apos %f anos sera de %f R$. \n", tempo, mont);
	
	return 0;
}
